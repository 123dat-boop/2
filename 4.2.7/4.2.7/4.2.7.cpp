#include <stdio.h>
#include <conio.h>
#include <math.h>
void main() {
	int soLuongCassette, soLuongVideo, soLuongVCD, tongSoTien;
	int cocCassette = 0, cocVideo = 0, cocVCD = 0;
	float thoiGianThue;
	const int cassette = 1000, giaCocCassette = 10000;
	const int video = 5000, giaCocVideo = 50000;
	const int VCD = 10000, giaCocVCD = 100000;
	const float thoiGianThuecassette = 0.5, thoiGianThueVideo = 3, thoiGianThueVCD = 5;
	printf("Nhap so luong bang cassette:");
	scanf_s("%d", &soLuongCassette);
	printf("Nhap so luong bang video:");
	scanf_s("%d", &soLuongVideo);
	printf("Nhap so luong bang VCD:");
	scanf_s("%d", &soLuongVCD);
	printf("	   BIEN LAI THU TIEN THUE BANG DIA\n");
	printf("==========================================================\n");
	printf("    Loai bang            So luong                 Gia tien\n");
	printf("==========================================================\n");
	if (soLuongCassette > 0) {
		printf("Bang cassette%20d %20d VND\n", soLuongCassette, soLuongCassette * cassette);
		cocCassette = 1;
	}
	if (soLuongVideo > 0) {
		printf("Bang video   %20d %20d VND\n", soLuongVideo, soLuongVideo * video);
		cocVideo = 1;
	}
	if (soLuongVCD > 0) {
		printf("Bang VCD     %20d %20d VND\n", soLuongVCD, soLuongVCD * VCD);
		cocVCD = 1;
	}
	printf("Phi dat coc			  %20d VND\n", cocCassette * giaCocCassette + cocVCD * giaCocVCD + cocVideo * giaCocVideo);
	printf("==========================================================\n");
	tongSoTien = soLuongCassette * cassette + soLuongVideo * video + soLuongVCD * VCD + cocCassette * giaCocCassette + cocVCD * giaCocVCD + cocVideo * giaCocVideo;
	printf("Tong so tien phai tra la: %d VND\n", tongSoTien);
	thoiGianThue = thoiGianThuecassette * soLuongCassette + thoiGianThueVideo * soLuongVideo + thoiGianThueVCD * soLuongVCD;
	printf("Ban duoc thue trong thoi gian la %f ngay", thoiGianThue);
	_getch();
}