ACCEPT v_codigo PROMPT 'Digite o código do item:'
ACCEPT v_descricao PROMPT 'Digite a descrição do item:'
ACCEPT v_preco PROMPT 'Digite o preço do item:'
ACCEPT v_tipo PROMPT 'Digite o tipo do item:'
DECLARE
     n_codigo ITEM.CODIGO%TYPE := &v_codigo;
     n_descricao ITEM.DESCRICAO%TYPE := '&v_descricao';
     n_preco ITEM.PRECO%TYPE := &v_preco;
     n_tipo ITEM.TIPO%TYPE := &v_tipo;
BEGIN
     SELECT CODIGO INTO n_tipo FROM TIPO WHERE CODIGO=n_tipo;
     INSERT INTO ITEM 
     VALUES(n_codigo, n_descricao, n_preco, n_tipo);
EXCEPTION
     WHEN DUP_VAL_ON_INDEX THEN
                 RAISE_APPLICATION_ERROR(-20001,'Código já cadastrado!');
     WHEN NO_DATA_FOUND THEN
                 RAISE_APPLICATION_ERROR(-20002,'Chave Estrangeira não localizada!');
END;