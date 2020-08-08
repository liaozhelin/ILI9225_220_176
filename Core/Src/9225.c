#include "9225.h"

//void Write_Cmd(unsigned char cmd)
//{
//	TFT_RS=0;
//	TFT_DATAH=cmd;
//    TFT_RW=0;
//	TFT_RW=1;
//}
//
//void Write_Data_L(unsigned char Dat)
//{
//	TFT_RS=1;
//	TFT_DATAH=Dat;
//	TFT_RW=0;
//	TFT_RW=1;
//}
//
//void  Write_Data_U16(unsigned int y)
//{
//	TFT_RS=1;
//	TFT_DATAH=y>>8;
//	TFT_RW=0;
//	TFT_RW=1;
//	TFT_DATAH=y;
//	TFT_RW=0;
//	TFT_RW=1;
//}
//
//static void LCD_SetPos(unsigned int x0,unsigned int x1,unsigned int y0,unsigned int y1)
//{
////y0+=32;
////y1+=32;
//	Write_Cmd(0x36);Write_Data_U16(x1);
//	Write_Cmd(0x37);Write_Data_U16(x0);
//	Write_Cmd(0x38);Write_Data_U16(y1);
//	Write_Cmd(0x39);Write_Data_U16(y0);
//	Write_Cmd(0x20);Write_Data_U16(x0);
//	Write_Cmd(0x21);Write_Data_U16(y0);
//
//	Write_Cmd(0x22);
//}
//
//void cls(unsigned int bColor)
//{
//	unsigned char i,j;
//	unsigned char DH,DL;
//
//	LCD_SetPos(0,175,0,219);
//	TFT_RS=1;
//	DL=bColor>>8;
//	DH=bColor;
//	for(i=0;i<176;i++)
//	for(j=0;j<220;j++)
//	{
//		TFT_DATAH=DL;
//		TFT_RW=0;TFT_RW=1;
//		TFT_DATAH=DH;
//		TFT_RW=0;TFT_RW=1;
//	}
//}
//
//void tft_int(void)
//{
//	TFT_RD=1;
//	TFT_CS=0;
//    DelayMs(130);
//    TFT_RES=0;
//    DelayMs(150);
//    TFT_RES=1;
//    DelayMs(220);
//	Write_Cmd(0xD0);Write_Data_U16(0x0003);
//	Write_Cmd(0xEB);Write_Data_U16(0x0B00);
//	Write_Cmd(0xEC);Write_Data_U16(0x000F);
//	Write_Cmd(0xC7);Write_Data_U16(0x030F);
//	Write_Cmd(0x01);Write_Data_U16(0x011C);
//	Write_Cmd(0x02);Write_Data_U16(0x0100);
//	Write_Cmd(0x03);Write_Data_U16(0x1030);
//	Write_Cmd(0x08);Write_Data_U16(0x0808);
//	Write_Cmd(0x0F);Write_Data_U16(0x0901);
//	DelayMs(10);
//	Write_Cmd(0x10);Write_Data_U16(0x0000);
//	Write_Cmd(0x11);Write_Data_U16(0x1B41); //The register setting is suitable for VCI=2.8V
//	DelayMs(120);
//	Write_Cmd(0x12);Write_Data_U16(0x200E);//The register setting is suitable for VCI=2.8V
//	Write_Cmd(0x13);Write_Data_U16(0x0052); //The register setting is suitable for VCI=2.8V
//	Write_Cmd(0x14);Write_Data_U16(0x4B5C); //The register setting is suitable for VCI=2.8V
//	Write_Cmd(0x30);Write_Data_U16(0x0000);
//	Write_Cmd(0x31);Write_Data_U16(0x00DB);
//	Write_Cmd(0x32);Write_Data_U16(0x0000);
//	Write_Cmd(0x33);Write_Data_U16(0x0000);
//	Write_Cmd(0x34);Write_Data_U16(0x00DB);
//	Write_Cmd(0x35);Write_Data_U16(0x0000);
//	Write_Cmd(0x36);Write_Data_U16(0x00AF);
//	Write_Cmd(0x37);Write_Data_U16(0x0000);
//	Write_Cmd(0x38);Write_Data_U16(0x00DB);
//	Write_Cmd(0x39);Write_Data_U16(0x0000);
//	Write_Cmd(0x50);Write_Data_U16(0x0000);
//	Write_Cmd(0x51);Write_Data_U16(0x0705);
//	Write_Cmd(0x52);Write_Data_U16(0x0C0A);
//	Write_Cmd(0x53);Write_Data_U16(0x0401);
//	Write_Cmd(0x54);Write_Data_U16(0x040C);
//	Write_Cmd(0x55);Write_Data_U16(0x0608);
//	Write_Cmd(0x56);Write_Data_U16(0x0000);
//	Write_Cmd(0x57);Write_Data_U16(0x0104);
//	Write_Cmd(0x58);Write_Data_U16(0x0E06);
//	Write_Cmd(0x59);Write_Data_U16(0x060E);;
//	Write_Cmd(0x20);Write_Data_U16(0x0000);
//	Write_Cmd(0x21);Write_Data_U16(0x0000);
//	Write_Cmd(0x07);Write_Data_U16(0x1017);
//
//    Write_Cmd(0x21);Write_Data_U16(0x0000);
//    Write_Cmd(0x22);
//    DelayMs(15);
//
//}


