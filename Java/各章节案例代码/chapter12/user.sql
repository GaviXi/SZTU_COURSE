create database asys ;
use asys ;
create table user( 
     id int not null auto_increment COMMENT '��������',
     username varchar(20) not null comment '�û���',
     password varchar(20) not null comment '����', 
     authority int not null comment '����', 
     primary key(id));
     
insert into user(username,password,authority) values('ascent','123456',0);