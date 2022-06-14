<main>:
   10150:	fb010113          	addi	sp,sp,-80
   10154:	04812623          	sw	s0,76(sp)
   10158:	05010413          	addi	s0,sp,80
   1015c:	fa042823          	sw	zero,-80(s0)
   10160:	fa042a23          	sw	zero,-76(s0)
   10164:	fa042c23          	sw	zero,-72(s0)
   10168:	fa042e23          	sw	zero,-68(s0)
   1016c:	fc042023          	sw	zero,-64(s0)
   10170:	fc042223          	sw	zero,-60(s0)
   10174:	fc042423          	sw	zero,-56(s0)
   10178:	fc042623          	sw	zero,-52(s0)
   1017c:	fc042823          	sw	zero,-48(s0)
   10180:	fc042a23          	sw	zero,-44(s0)
   10184:	fc042c23          	sw	zero,-40(s0)
   10188:	06400793          	li	a5,100
   1018c:	faf42823          	sw	a5,-80(s0)
   10190:	05800793          	li	a5,88
   10194:	faf42a23          	sw	a5,-76(s0)
   10198:	06500793          	li	a5,101
   1019c:	faf42c23          	sw	a5,-72(s0)
   101a0:	02000793          	li	a5,32
   101a4:	faf42e23          	sw	a5,-68(s0)
   101a8:	04300793          	li	a5,67
   101ac:	fcf42023          	sw	a5,-64(s0)
   101b0:	0be00793          	li	a5,190
   101b4:	fcf42223          	sw	a5,-60(s0)
   101b8:	0e600793          	li	a5,230
   101bc:	fcf42423          	sw	a5,-56(s0)
   101c0:	2fd00793          	li	a5,765
   101c4:	fcf42623          	sw	a5,-52(s0)
   101c8:	00c00793          	li	a5,12
   101cc:	fcf42823          	sw	a5,-48(s0)
   101d0:	02d00793          	li	a5,45
   101d4:	fcf42a23          	sw	a5,-44(s0)
   101d8:	00a00793          	li	a5,10
   101dc:	fef42023          	sw	a5,-32(s0)
   101e0:	fe042623          	sw	zero,-20(s0)
   101e4:	0d80006f          	j	102bc <main+0x16c>
   101e8:	fec42783          	lw	a5,-20(s0)
   101ec:	fef42223          	sw	a5,-28(s0)
   101f0:	fec42783          	lw	a5,-20(s0)
   101f4:	00178793          	addi	a5,a5,1 # 1 <register_fini-0x10073>
   101f8:	fef42423          	sw	a5,-24(s0)
   101fc:	0440006f          	j	10240 <main+0xf0>
   10200:	fe442783          	lw	a5,-28(s0)
   10204:	00279793          	slli	a5,a5,0x2
   10208:	ff040713          	addi	a4,s0,-16
   1020c:	00f707b3          	add	a5,a4,a5
   10210:	fc07a703          	lw	a4,-64(a5)
   10214:	fe842783          	lw	a5,-24(s0)
   10218:	00279793          	slli	a5,a5,0x2
   1021c:	ff040693          	addi	a3,s0,-16
   10220:	00f687b3          	add	a5,a3,a5
   10224:	fc07a783          	lw	a5,-64(a5)
   10228:	00e7d663          	bge	a5,a4,10234 <main+0xe4>
   1022c:	fe842783          	lw	a5,-24(s0)
   10230:	fef42223          	sw	a5,-28(s0)
   10234:	fe842783          	lw	a5,-24(s0)
   10238:	00178793          	addi	a5,a5,1
   1023c:	fef42423          	sw	a5,-24(s0)
   10240:	fe842703          	lw	a4,-24(s0)
   10244:	fe042783          	lw	a5,-32(s0)
   10248:	faf74ce3          	blt	a4,a5,10200 <main+0xb0>
   1024c:	fe442703          	lw	a4,-28(s0)
   10250:	fec42783          	lw	a5,-20(s0)
   10254:	04f70e63          	beq	a4,a5,102b0 <main+0x160>
   10258:	fec42783          	lw	a5,-20(s0)
   1025c:	00279793          	slli	a5,a5,0x2
   10260:	ff040713          	addi	a4,s0,-16
   10264:	00f707b3          	add	a5,a4,a5
   10268:	fc07a783          	lw	a5,-64(a5)
   1026c:	fcf42e23          	sw	a5,-36(s0)
   10270:	fe442783          	lw	a5,-28(s0)
   10274:	00279793          	slli	a5,a5,0x2
   10278:	ff040713          	addi	a4,s0,-16
   1027c:	00f707b3          	add	a5,a4,a5
   10280:	fc07a703          	lw	a4,-64(a5)
   10284:	fec42783          	lw	a5,-20(s0)
   10288:	00279793          	slli	a5,a5,0x2
   1028c:	ff040693          	addi	a3,s0,-16
   10290:	00f687b3          	add	a5,a3,a5
   10294:	fce7a023          	sw	a4,-64(a5)
   10298:	fe442783          	lw	a5,-28(s0)
   1029c:	00279793          	slli	a5,a5,0x2
   102a0:	ff040713          	addi	a4,s0,-16
   102a4:	00f707b3          	add	a5,a4,a5
   102a8:	fdc42703          	lw	a4,-36(s0)
   102ac:	fce7a023          	sw	a4,-64(a5)
   102b0:	fec42783          	lw	a5,-20(s0)
   102b4:	00178793          	addi	a5,a5,1
   102b8:	fef42623          	sw	a5,-20(s0)
   102bc:	fe042783          	lw	a5,-32(s0)
   102c0:	fff78793          	addi	a5,a5,-1
   102c4:	fec42703          	lw	a4,-20(s0)
   102c8:	f2f740e3          	blt	a4,a5,101e8 <main+0x98>
   102cc:	fe042623          	sw	zero,-20(s0)
   102d0:	0100006f          	j	102e0 <main+0x190>
   102d4:	fec42783          	lw	a5,-20(s0)
   102d8:	00178793          	addi	a5,a5,1
   102dc:	fef42623          	sw	a5,-20(s0)
   102e0:	fec42703          	lw	a4,-20(s0)
   102e4:	fe042783          	lw	a5,-32(s0)
   102e8:	fef746e3          	blt	a4,a5,102d4 <main+0x184>
   102ec:	00000013          	nop
   102f0:	00000013          	nop
   102f4:	04c12403          	lw	s0,76(sp)
   102f8:	05010113          	addi	sp,sp,80
   102fc:	00008067          	ret