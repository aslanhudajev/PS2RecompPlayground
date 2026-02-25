#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _kExitTLBHandler
// Address: 0x137780 - 0x137874
void _kExitTLBHandler_0x137780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_kExitTLBHandler_0x137780");
#endif

    ctx->pc = 0x137780u;

    // 0x137780: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x137780u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
    // 0x137784: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x137784u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x137788: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x137788u;
    SET_GPR_VEC(ctx, 1, PS2_PAND(GPR_VEC(ctx, 1), GPR_VEC(ctx, 26)));
    // 0x13778c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x13778cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
    // 0x137790: 0x40f  sync.p
    ctx->pc = 0x137790u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x137794: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x137794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x137798: 0x8c427668  lw          $v0, 0x7668($v0)
    ctx->pc = 0x137798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30312)));
    // 0x13779c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x13779cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
    // 0x1377a0: 0x40f  sync.p
    ctx->pc = 0x1377a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1377a4: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1377a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1377a8: 0xdc427640  ld          $v0, 0x7640($v0)
    ctx->pc = 0x1377a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x1377ac: 0x400011  mthi        $v0
    ctx->pc = 0x1377acu;
    ctx->hi = GPR_U64(ctx, 2);
    // 0x1377b0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1377b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1377b4: 0xdc427648  ld          $v0, 0x7648($v0)
    ctx->pc = 0x1377b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 30280)));
    // 0x1377b8: 0x70400011  mthi1       $v0
    ctx->pc = 0x1377b8u;
    ctx->hi1 = GPR_U64(ctx, 2);
    // 0x1377bc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1377bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1377c0: 0xdc427650  ld          $v0, 0x7650($v0)
    ctx->pc = 0x1377c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1377c4: 0x400013  mtlo        $v0
    ctx->pc = 0x1377c4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1377c8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1377c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1377cc: 0xdc427658  ld          $v0, 0x7658($v0)
    ctx->pc = 0x1377ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 30296)));
    // 0x1377d0: 0x70400013  mtlo1       $v0
    ctx->pc = 0x1377d0u;
    ctx->lo1 = GPR_U64(ctx, 2);
    // 0x1377d4: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1377d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1377d8: 0xdc427660  ld          $v0, 0x7660($v0)
    ctx->pc = 0x1377d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 30304)));
    // 0x1377dc: 0x400029  mtsa        $v0
    ctx->pc = 0x1377dcu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
    // 0x1377e0: 0x40f  sync.p
    ctx->pc = 0x1377e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1377e4: 0x3c1a0024  lui         $k0, 0x24
    ctx->pc = 0x1377e4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)36 << 16));
    // 0x1377e8: 0x275a7440  addiu       $k0, $k0, 0x7440
    ctx->pc = 0x1377e8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 29760));
    // 0x1377ec: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x1377ecu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
    // 0x1377f0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x1377f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
    // 0x1377f4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x1377f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
    // 0x1377f8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x1377f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
    // 0x1377fc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x1377fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
    // 0x137800: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x137800u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
    // 0x137804: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x137804u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
    // 0x137808: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x137808u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
    // 0x13780c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x13780cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
    // 0x137810: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x137810u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
    // 0x137814: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x137814u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
    // 0x137818: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x137818u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
    // 0x13781c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x13781cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
    // 0x137820: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x137820u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
    // 0x137824: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x137824u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
    // 0x137828: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x137828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
    // 0x13782c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x13782cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
    // 0x137830: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x137830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
    // 0x137834: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x137834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
    // 0x137838: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x137838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
    // 0x13783c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x13783cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
    // 0x137840: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x137840u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
    // 0x137844: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x137844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
    // 0x137848: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x137848u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
    // 0x13784c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x13784cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
    // 0x137850: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x137850u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
    // 0x137854: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x137854u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
    // 0x137858: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x137858u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
    // 0x13785c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x13785cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
    // 0x137860: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x137860u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
    // 0x137864: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x137864u;
    SET_GPR_VEC(ctx, 26, PS2_POR(GPR_VEC(ctx, 26), _mm_cvtsi32_si128((int)19u)));
    // 0x137868: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x137868u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
    // 0x13786c: 0x40f  sync.p
    ctx->pc = 0x13786cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x137870: 0x42000018  eret
    ctx->pc = 0x137870u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
}
