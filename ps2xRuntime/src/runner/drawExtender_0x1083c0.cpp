#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawExtender
// Address: 0x1083c0 - 0x108604
void drawExtender_0x1083c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawExtender_0x1083c0");
#endif

    ctx->pc = 0x1083c0u;

    // 0x1083c0: 0x8f9982b8  lw          $t9, -0x7D48($gp)
    ctx->pc = 0x1083c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1083c4: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1083c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1083c8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1083c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1083cc: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1083ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1083d0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1083d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1083d4: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x1083d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1083d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1083d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1083dc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1083dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1083e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1083e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1083e4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1083e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1083e8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1083e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1083ec: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x1083ecu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)32769u)));
    // 0x1083f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1083f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1083f4: 0x3c0801ff  lui         $t0, 0x1FF
    ctx->pc = 0x1083f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)511 << 16));
    // 0x1083f8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x1083f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1083fc: 0x3508027f  ori         $t0, $t0, 0x27F
    ctx->pc = 0x1083fcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)639u)));
    // 0x108400: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x108400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x108404: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108408: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x108408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10840c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108410: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x108410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x108414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108418: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x108418u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x10841c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x10841cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x108420: 0x354a0003  ori         $t2, $t2, 0x3
    ctx->pc = 0x108420u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)3u)));
    // 0x108424: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x108424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x108428: 0x240b014c  addiu       $t3, $zero, 0x14C
    ctx->pc = 0x108428u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x10842c: 0x7f220000  sq          $v0, 0x0($t9)
    ctx->pc = 0x10842cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 2));
    // 0x108430: 0x3c0c7f00  lui         $t4, 0x7F00
    ctx->pc = 0x108430u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32512 << 16));
    // 0x108434: 0x358c00ff  ori         $t4, $t4, 0xFF
    ctx->pc = 0x108434u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), _mm_cvtsi32_si128((int)255u)));
    // 0x108438: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x108438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x10843c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x10843cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108440: 0x827018  mult        $t6, $a0, $v0
    ctx->pc = 0x108440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108444: 0x3c130002  lui         $s3, 0x2
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2 << 16));
    // 0x108448: 0x24140047  addiu       $s4, $zero, 0x47
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x10844c: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x10844cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x108450: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x108450u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x108454: 0x36b58001  ori         $s5, $s5, 0x8001
    ctx->pc = 0x108454u;
    SET_GPR_VEC(ctx, 21, PS2_POR(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)32769u)));
    // 0x108458: 0x3c164141  lui         $s6, 0x4141
    ctx->pc = 0x108458u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16705 << 16));
    // 0x10845c: 0x36d64141  ori         $s6, $s6, 0x4141
    ctx->pc = 0x10845cu;
    SET_GPR_VEC(ctx, 22, PS2_POR(GPR_VEC(ctx, 22), _mm_cvtsi32_si128((int)16705u)));
    // 0x108460: 0xaf260000  sw          $a2, 0x0($t9)
    ctx->pc = 0x108460u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 6));
    // 0x108464: 0xff270010  sd          $a3, 0x10($t9)
    ctx->pc = 0x108464u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 16), GPR_U64(ctx, 7));
    // 0x108468: 0x27240080  addiu       $a0, $t9, 0x80
    ctx->pc = 0x108468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 128));
    // 0x10846c: 0xff280020  sd          $t0, 0x20($t9)
    ctx->pc = 0x10846cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 32), GPR_U64(ctx, 8));
    // 0x108470: 0x2411004d  addiu       $s1, $zero, 0x4D
    ctx->pc = 0x108470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x108474: 0xff290028  sd          $t1, 0x28($t9)
    ctx->pc = 0x108474u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 40), GPR_U64(ctx, 9));
    // 0x108478: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x108478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10847c: 0xff2a0030  sd          $t2, 0x30($t9)
    ctx->pc = 0x10847cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 48), GPR_U64(ctx, 10));
    // 0x108480: 0x240f007f  addiu       $t7, $zero, 0x7F
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x108484: 0xff370038  sd          $s7, 0x38($t9)
    ctx->pc = 0x108484u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 56), GPR_U64(ctx, 23));
    // 0x108488: 0x24187100  addiu       $t8, $zero, 0x7100
    ctx->pc = 0x108488u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
    // 0x10848c: 0xff2b0040  sd          $t3, 0x40($t9)
    ctx->pc = 0x10848cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 64), GPR_U64(ctx, 11));
    // 0x108490: 0x27220090  addiu       $v0, $t9, 0x90
    ctx->pc = 0x108490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 144));
    // 0x108494: 0xff2c0050  sd          $t4, 0x50($t9)
    ctx->pc = 0x108494u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 80), GPR_U64(ctx, 12));
    // 0x108498: 0x272600a0  addiu       $a2, $t9, 0xA0
    ctx->pc = 0x108498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 160));
    // 0x10849c: 0xff2d0058  sd          $t5, 0x58($t9)
    ctx->pc = 0x10849cu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 88), GPR_U64(ctx, 13));
    // 0x1084a0: 0x24ac0700  addiu       $t4, $a1, 0x700
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 1792));
    // 0x1084a4: 0xff330060  sd          $s3, 0x60($t9)
    ctx->pc = 0x1084a4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 96), GPR_U64(ctx, 19));
    // 0x1084a8: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x1084a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1084ac: 0xff340068  sd          $s4, 0x68($t9)
    ctx->pc = 0x1084acu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 104), GPR_U64(ctx, 20));
    // 0x1084b0: 0x3c0d0010  lui         $t5, 0x10
    ctx->pc = 0x1084b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16 << 16));
    // 0x1084b4: 0xff350070  sd          $s5, 0x70($t9)
    ctx->pc = 0x1084b4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 112), GPR_U64(ctx, 21));
    // 0x1084b8: 0x25ce0710  addiu       $t6, $t6, 0x710
    ctx->pc = 0x1084b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1808));
    // 0x1084bc: 0xff360078  sd          $s6, 0x78($t9)
    ctx->pc = 0x1084bcu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 120), GPR_U64(ctx, 22));
    // 0x1084c0: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1084c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1084c4: 0xff370018  sd          $s7, 0x18($t9)
    ctx->pc = 0x1084c4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 24), GPR_U64(ctx, 23));
    // 0x1084c8: 0x272700b0  addiu       $a3, $t9, 0xB0
    ctx->pc = 0x1084c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), 176));
    // 0x1084cc: 0xaf320080  sw          $s2, 0x80($t9)
    ctx->pc = 0x1084ccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 128), GPR_U32(ctx, 18));
    // 0x1084d0: 0x272900c0  addiu       $t1, $t9, 0xC0
    ctx->pc = 0x1084d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), 192));
    // 0x1084d4: 0xff200048  sd          $zero, 0x48($t9)
    ctx->pc = 0x1084d4u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 72), GPR_U64(ctx, 0));
    // 0x1084d8: 0x24a50714  addiu       $a1, $a1, 0x714
    ctx->pc = 0x1084d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1812));
    // 0x1084dc: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x1084dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x1084e0: 0x272800d0  addiu       $t0, $t9, 0xD0
    ctx->pc = 0x1084e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), 208));
    // 0x1084e4: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x1084e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x1084e8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1084e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1084ec: 0xac8f000c  sw          $t7, 0xC($a0)
    ctx->pc = 0x1084ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 15));
    // 0x1084f0: 0x272a00e0  addiu       $t2, $t9, 0xE0
    ctx->pc = 0x1084f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), 224));
    // 0x1084f4: 0xaf380090  sw          $t8, 0x90($t9)
    ctx->pc = 0x1084f4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 144), GPR_U32(ctx, 24));
    // 0x1084f8: 0x272b00f0  addiu       $t3, $t9, 0xF0
    ctx->pc = 0x1084f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), 240));
    // 0x1084fc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1084fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x108500: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
    // 0x108504: 0xac4c0004  sw          $t4, 0x4($v0)
    ctx->pc = 0x108504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 12));
    // 0x108508: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x108508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10850c: 0xac4d0008  sw          $t5, 0x8($v0)
    ctx->pc = 0x10850cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 13));
    // 0x108510: 0xaf3200a0  sw          $s2, 0xA0($t9)
    ctx->pc = 0x108510u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 160), GPR_U32(ctx, 18));
    // 0x108514: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x108514u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108518: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x108518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
    // 0x10851c: 0xacd00008  sw          $s0, 0x8($a2)
    ctx->pc = 0x10851cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 16));
    // 0x108520: 0xaccf000c  sw          $t7, 0xC($a2)
    ctx->pc = 0x108520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 15));
    // 0x108524: 0xaf2e00b0  sw          $t6, 0xB0($t9)
    ctx->pc = 0x108524u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 176), GPR_U32(ctx, 14));
    // 0x108528: 0xacec0004  sw          $t4, 0x4($a3)
    ctx->pc = 0x108528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 12));
    // 0x10852c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x10852cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x108530: 0xaced0008  sw          $t5, 0x8($a3)
    ctx->pc = 0x108530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 13));
    // 0x108534: 0xaf3200c0  sw          $s2, 0xC0($t9)
    ctx->pc = 0x108534u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 192), GPR_U32(ctx, 18));
    // 0x108538: 0xad310004  sw          $s1, 0x4($t1)
    ctx->pc = 0x108538u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 17));
    // 0x10853c: 0xad300008  sw          $s0, 0x8($t1)
    ctx->pc = 0x10853cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 16));
    // 0x108540: 0xad2f000c  sw          $t7, 0xC($t1)
    ctx->pc = 0x108540u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 15));
    // 0x108544: 0xaf3800d0  sw          $t8, 0xD0($t9)
    ctx->pc = 0x108544u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 208), GPR_U32(ctx, 24));
    // 0x108548: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x108548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x10854c: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x10854cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x108550: 0xad0d0008  sw          $t5, 0x8($t0)
    ctx->pc = 0x108550u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 13));
    // 0x108554: 0xaf3200e0  sw          $s2, 0xE0($t9)
    ctx->pc = 0x108554u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 224), GPR_U32(ctx, 18));
    // 0x108558: 0xad510004  sw          $s1, 0x4($t2)
    ctx->pc = 0x108558u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 17));
    // 0x10855c: 0xad500008  sw          $s0, 0x8($t2)
    ctx->pc = 0x10855cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 16));
    // 0x108560: 0xad4f000c  sw          $t7, 0xC($t2)
    ctx->pc = 0x108560u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 15));
    // 0x108564: 0xaf2e00f0  sw          $t6, 0xF0($t9)
    ctx->pc = 0x108564u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 240), GPR_U32(ctx, 14));
    // 0x108568: 0xad650004  sw          $a1, 0x4($t3)
    ctx->pc = 0x108568u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
    // 0x10856c: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x10856cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
    // 0x108570: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x108570u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x108574: 0x7f220100  sq          $v0, 0x100($t9)
    ctx->pc = 0x108574u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 256), GPR_VEC(ctx, 2));
    // 0x108578: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x108578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x10857c: 0xaf330100  sw          $s3, 0x100($t9)
    ctx->pc = 0x10857cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 256), GPR_U32(ctx, 19));
    // 0x108580: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x108580u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x108584: 0xc043948  jal         func_10E520
    ctx->pc = 0x108584u;
    SET_GPR_U32(ctx, 31, 0x10858Cu);
    ctx->pc = 0x108588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108584u;
            // 0x108588: 0xaf220000  sw          $v0, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10858Cu; }
        if (ctx->pc != 0x10858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10858Cu; }
        if (ctx->pc != 0x10858Cu) { return; }
    }
    ctx->pc = 0x10858Cu;
    // 0x10858c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108590: 0xc043322  jal         func_10CC88
    ctx->pc = 0x108590u;
    SET_GPR_U32(ctx, 31, 0x108598u);
    ctx->pc = 0x108594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108590u;
            // 0x108594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108598u; }
        if (ctx->pc != 0x108598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108598u; }
        if (ctx->pc != 0x108598u) { return; }
    }
    ctx->pc = 0x108598u;
    // 0x108598: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x108598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10859c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10859cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a0: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x1085A0u;
    SET_GPR_U32(ctx, 31, 0x1085A8u);
    ctx->pc = 0x1085A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085A0u;
            // 0x1085a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085A8u; }
        if (ctx->pc != 0x1085A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085A8u; }
        if (ctx->pc != 0x1085A8u) { return; }
    }
    ctx->pc = 0x1085A8u;
    // 0x1085a8: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x1085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1085ac: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1085acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1085b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1085b0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1085b4: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1085b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1085b8: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x1085B8u;
    SET_GPR_U32(ctx, 31, 0x1085C0u);
    ctx->pc = 0x1085BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085B8u;
            // 0x1085bc: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085C0u; }
        if (ctx->pc != 0x1085C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085C0u; }
        if (ctx->pc != 0x1085C0u) { return; }
    }
    ctx->pc = 0x1085C0u;
    // 0x1085c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1085c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085c4: 0xc043322  jal         func_10CC88
    ctx->pc = 0x1085C4u;
    SET_GPR_U32(ctx, 31, 0x1085CCu);
    ctx->pc = 0x1085C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085C4u;
            // 0x1085c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085CCu; }
        if (ctx->pc != 0x1085CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085CCu; }
        if (ctx->pc != 0x1085CCu) { return; }
    }
    ctx->pc = 0x1085CCu;
    // 0x1085cc: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x1085ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1085d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1085d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1085d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1085d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1085d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085dc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1085dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1085e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1085e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1085e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1085e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1085e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1085e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1085ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1085ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1085f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1085f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1085f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1085f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1085f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1085f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1085fc: 0x804372a  j           func_10DCA8
    ctx->pc = 0x1085FCu;
    ctx->pc = 0x108600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085FCu;
            // 0x108600: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108604u;
}
