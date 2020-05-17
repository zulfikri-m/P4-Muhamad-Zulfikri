#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	
	login : 
	cout<<" \tMenu Login!!\n\n";
	cout<<" Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<" Masukkan Password  : ";cin>>pass;cout<<"\n";
	if (user == "muhamad_zulfikri" && pass == "f1b019094")
		{
			cout<<"Selamat Anda Berhasil Login\n";
		}
	else
		{
			cout<<"Ussername dan password anda salah silahkan coba kembali \n";
			cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
			if (pilihanlogin=='y' || pilihanlogin=='Y')
			{
				system("cls");
				goto login;
			}
			else
			{
				goto selesai;
			}
			if (pilihanlogin=='t' || pilihanlogin=='T')
			{
				goto selesai;
			}		
		}
						
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	
	{
    ulangjwb :
    cout<<"\t\t\t\t\t=======================\n";
    cout<<"\t\t\t\t\t SOAL TERKAIT COVID-19\n";
    cout<<"\t\t\t\t\t=======================\n\n";
    cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Dibawah ini adalah media penyebaran virus corona, kecuali...\n";
    string pilgan5[50]={"a. Bersalaman/Sentuhan Tangan","b. Udara","c. Percikan Batuk dan Bersin","d. Benda-benda padat"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"2. Virus corona (COVID-19) yang menyerang manusia muncul di negara ... pada awal tahun 2020.\n";
	string pilgan10[50]={"a. China","b. Indonesia","c. Italia","d. Amerika"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;} 
    cout<<"\n";
    cout<<"3. Masa inkubasi virus COVID-19 adalah selama...\n";
	string pilgan6[50]={"a. 7 Hari","b. 14 Hari","c. 28 Hari","d. 32 Hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}     
	cout<<"\n";
	cout<<"4. Untuk mencegah penularan virus corona, sebaiknya mencuci tangan dengan sabun pada ...\n";
	string pilgan9[50]={"a. Air Kolam","b. Air Dalam Wadah","c. Air Mengalir","d. Air Es"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"5. Berikut gejala-gejala virus COVID-19, kecuali...\n";
	string pilgan8[50]={"a. Demam","b. Sesak","c. Flu dan Batuk Kering","d. Sakit Perut"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"6. Apa kepanjangan dari PSBB?\n";
    string pilgan2[50]={"a. Pendidikan Seni Budaya Bangsa","b. Pembatasan Sosial Berskala Besar","c. Partai Serikat Budaya Bangsa","d. Pembatasan Sosial Berbadan Besar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"7. Apa nama pemeriksaan diagnostik untuk mengetahui sesorang terinfeksi COVID-19?\n";
	string pilgan3[50]={"a. SWAB","b. Termometer","c. Tensimeter","d. Cek Tekanan Darah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"8. Apa nama alat yang digunakan untuk mengetahui seseorang terinfeksi COVID-19?\n";
	string pilgan1[50]={"a. Termometer","b. Voltmeter","c. Rapid Test","d. Tensimeter"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"9. Berikut ini cara memutus rantai penularan COVID-19, kecuali?\n";
	string pilgan4[50]={"a. Social Distancing","b. Menggunakan Masker","c. Berkumpul di Tempat Ramai","d. Mencuci Tangan Dengan Sabun"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"10. Apa tujuan dari dari social distancing?\n";
	string pilgan7[50]={"a. Supaya Orang-orang Tidak Terlalu Akrab","b. Antisipasi Penyebaran COVID-19","c. Membudayakan Disiplin","d. Melatih Orang Mandiri"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
    cout<<"Apakah Anda Yakin Dengan Jawaban Anda??[Y/T]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"================================================="<<endl;
			cout<<"TERIMA KASIH SUDAH MENJAWAB SOAL TENTANG COVID-19\n";
			cout<<"     SEMOGA ANDA SELALU DALAM KEADAAN SEHAT\n";
			cout<<"================================================="<<endl;
	
}
