init:
    addu $27,$0,$0
    addu $28,$0,$0
    addu $29,$0,$0
    addu $30,$0,$0
    addu $31,$0,$0
    ori $28,$28,4
    nop
    nop
    nop
block_0:
    lui $31,0xdd7f
    ori $31,$31,0x94ee
    lui $12,0x0480
    ori $12,$12,0x16da
    jal jump_block_0
    nop
    jump_back_0:
    
    sw $31,0($29)
    addu $29,$29,$28
    j block_1
    ori $30,$0,18
    
jump_block_0:
    msub $31,$12
    nop
    j jump_back_0
    nop
    
block_1:
    lui $31,0x798f
    ori $31,$31,0xfcc8
    lui $12,0x30b9
    ori $12,$12,0xb1dd
    jal jump_block_1
    nop
    jump_back_1:
    
    sw $31,0($29)
    addu $29,$29,$28
    j block_2
    ori $30,$0,78
    
jump_block_1:
    ori $30,$0,28
    msub $31,$12
    ori $30,$0,47
    j jump_back_1
    nop
    
block_2:
    lui $23,0x4402
    ori $23,$23,0x49f8
    lui $13,0xbc7f
    ori $13,$13,0xa3b9
    jal jump_block_2
    nop
    jump_back_2:
    
    sw $31,0($29)
    addu $29,$29,$28
    j block_3
    ori $30,$0,44
    
jump_block_2:
    msub $23,$13
    nop
    j jump_back_2
    nop
    
block_3:
    lui $23,0xe1e1
    ori $23,$23,0x534a
    lui $13,0xfa7f
    ori $13,$13,0xdf5b
    jal jump_block_3
    nop
    jump_back_3:
    
    sw $31,0($29)
    addu $29,$29,$28
    j block_4
    nop
    
jump_block_3:
    ori $30,$0,97
    msub $23,$13
    nop
    j jump_back_3
    nop
    
block_4:
    lui $31,0x8d8a
    ori $31,$31,0x168f
    lui $14,0xfad6
    ori $14,$14,0x45cc
    jal jump_block_4
    nop
    jump_back_4:
    
    sw $31,0($29)
    addu $29,$29,$28
    j block_5
    ori $30,$0,49
    
jump_block_4:
    msub $31,$14
    nop
    j jump_back_4
    nop
    
block_5:
    lui $31,0x4f89
    ori $31,$31,0x71cd
    lui $14,0xdfc4
    ori $14,$14,0x6ad9
    jal jump_block_5
    nop
    jump_back_5:
    
    sw $31,0($29)
    addu $29,$29,$28
    j block_6
    nop
    
jump_block_5:
    nop
    msub $31,$14
    nop
    j jump_back_5
    nop
    
block_6:
    lui $5,0x8ac4
    ori $5,$5,0x515c
    lui $2,0x16b3
    ori $2,$2,0x9499
    j jump_block_6
    nop
    jr_back_6:
        addu $8,$0,$31
        jalr $5,$8
        nop
    jump_back_6:
    
    sw $5,0($29)
    addu $29,$29,$28
    j block_7
    ori $30,$0,11
    
jump_block_6:
    jal jr_back_6
    nop
    msub $5,$2
    nop
    j jump_back_6
    nop
    
block_7:
    lui $5,0xa455
    ori $5,$5,0x1228
    lui $2,0x1ba2
    ori $2,$2,0x51ee
    j jump_block_7
    nop
    jr_back_7:
        addu $8,$0,$31
        jalr $5,$8
        nop
    jump_back_7:
    
    sw $5,0($29)
    addu $29,$29,$28
    j block_8
    ori $30,$0,11
    
jump_block_7:
    jal jr_back_7
    nop
    nop
    msub $5,$2
    ori $30,$0,44
    j jump_back_7
    nop
    
block_8:
    lui $0,0x2219
    ori $0,$0,0xf94b
    lui $22,0xbdd5
    ori $22,$22,0xbcff
    j jump_block_8
    nop
    jr_back_8:
        addu $13,$0,$31
        jalr $0,$13
        nop
    jump_back_8:
    
    sw $0,0($29)
    addu $29,$29,$28
    j block_9
    ori $30,$0,93
    
jump_block_8:
    jal jr_back_8
    nop
    msub $0,$22
    nop
    j jump_back_8
    nop
    
block_9:
    lui $0,0xcb75
    ori $0,$0,0x9328
    lui $22,0x6051
    ori $22,$22,0xb61f
    j jump_block_9
    nop
    jr_back_9:
        addu $13,$0,$31
        jalr $0,$13
        nop
    jump_back_9:
    
    sw $0,0($29)
    addu $29,$29,$28
    j block_10
    ori $30,$0,50
    
jump_block_9:
    jal jr_back_9
    nop
    ori $30,$0,57
    msub $0,$22
    ori $30,$0,67
    j jump_back_9
    nop
    
block_10:
    lui $24,0x981d
    ori $24,$24,0x4fb9
    lui $4,0xf558
    ori $4,$4,0x2f48
    j jump_block_10
    nop
    jr_back_10:
        addu $14,$0,$31
        jalr $21,$14
        nop
    jump_back_10:
    
    sw $21,0($29)
    addu $29,$29,$28
    j block_11
    ori $30,$0,81
    
jump_block_10:
    jal jr_back_10
    nop
    msub $24,$4
    ori $30,$0,24
    j jump_back_10
    nop

block_11:

