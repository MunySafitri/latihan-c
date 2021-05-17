#include<stdio.h>
//membuat struct
struct Mahasiswa{
  char *name;
  char *address;
  int age;
};
void main(){
  //menggunakan struct
  struct Mahasiswa mhs1,mhs2;
  //mengisi nilai ke struct
  mhs1.name="Dian";
  mhs1.address="Mataram";
  mhs1.age=23;

  mhs2.name="bambang";
  mhs2.address="surabaya";
  mhs2.age=23;
  //menceatak isi struct
  printf("## Mahasiswa 1##\n");
  printf("nama: %s\n",mhs1.name );
  printf("alamat: %s\n",mhs1.address );
  printf("umur: %d\n",mhs1.age );

  printf("##Mahasiswa 2##\n");
  printf("nama: %s\n", mhs2.name );
  printf("alamat: %s\n",mhs2.address );
  printf("umur: %d\n",mhs2.age );

}
