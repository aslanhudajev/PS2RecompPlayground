#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: menuAnimate
// Address: 0x105810 - 0x1059b0
void menuAnimate_0x105810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105810u;

    // 0x105810: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x105814: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105818: 0x8f9182e8  lw          $s1, -0x7D18($gp)
    ctx->pc = 0x105818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x10581c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105820: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105824: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x105824u;
    SET_GPR_VEC(ctx, 22, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x105828: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10582c: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x10582cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x105830: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105834: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x105834u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105838: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x105838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10583c: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105840: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x105840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x105844: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x105844u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x105848: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x105848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10584c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105854u;
    {
        const bool branch_taken_0x105854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105854u;
            // 0x105858: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105854) {
            ctx->pc = 0x105868u;
            goto label_105868;
        }
    }
    ctx->pc = 0x10585Cu;
    // 0x10585c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10585cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105860: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105860u;
    SET_GPR_U32(ctx, 31, 0x105868u);
    ctx->pc = 0x105864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105860u;
            // 0x105864: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105868u; }
        if (ctx->pc != 0x105868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105868u; }
        if (ctx->pc != 0x105868u) { return; }
    }
    ctx->pc = 0x105868u;
label_105868:
    // 0x105868: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x105868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x10586c: 0x8f9282d0  lw          $s2, -0x7D30($gp)
    ctx->pc = 0x10586cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x105870: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x105870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x105874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x105874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x105878: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x105878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10587c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105880: 0xae110550  sw          $s1, 0x550($s0)
    ctx->pc = 0x105880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 17));
    // 0x105884: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x105884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x105888: 0x241e1000  addiu       $fp, $zero, 0x1000
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x10588c: 0x24022800  addiu       $v0, $zero, 0x2800
    ctx->pc = 0x10588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x105890: 0xae160560  sw          $s6, 0x560($s0)
    ctx->pc = 0x105890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 22));
    // 0x105894: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x105894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x105898: 0x24170400  addiu       $s7, $zero, 0x400
    ctx->pc = 0x105898u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x10589c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1058a0: 0xae130558  sw          $s3, 0x558($s0)
    ctx->pc = 0x1058a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 19));
    // 0x1058a4: 0xae020568  sw          $v0, 0x568($s0)
    ctx->pc = 0x1058a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    // 0x1058a8: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x1058a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x1058ac: 0xae16055c  sw          $s6, 0x55C($s0)
    ctx->pc = 0x1058acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 22));
    // 0x1058b0: 0xae14056c  sw          $s4, 0x56C($s0)
    ctx->pc = 0x1058b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 20));
    // 0x1058b4: 0xa2150578  sb          $s5, 0x578($s0)
    ctx->pc = 0x1058b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1400), (uint8_t)GPR_U32(ctx, 21));
    // 0x1058b8: 0xe6140570  swc1        $f20, 0x570($s0)
    ctx->pc = 0x1058b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x1058bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1058BCu;
    {
        const bool branch_taken_0x1058bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058BCu;
            // 0x1058c0: 0xe6140574  swc1        $f20, 0x574($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058bc) {
            ctx->pc = 0x1058D0u;
            goto label_1058d0;
        }
    }
    ctx->pc = 0x1058C4u;
    // 0x1058c4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1058c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1058c8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1058C8u;
    SET_GPR_U32(ctx, 31, 0x1058D0u);
    ctx->pc = 0x1058CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1058C8u;
            // 0x1058cc: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1058D0u; }
        if (ctx->pc != 0x1058D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1058D0u; }
        if (ctx->pc != 0x1058D0u) { return; }
    }
    ctx->pc = 0x1058D0u;
label_1058d0:
    // 0x1058d0: 0x8f9182d4  lw          $s1, -0x7D2C($gp)
    ctx->pc = 0x1058d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
    // 0x1058d4: 0x24027b00  addiu       $v0, $zero, 0x7B00
    ctx->pc = 0x1058d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31488));
    // 0x1058d8: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1058d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x1058dc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1058dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1058e0: 0xae120264  sw          $s2, 0x264($s0)
    ctx->pc = 0x1058e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 18));
    // 0x1058e4: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1058e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x1058e8: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1058e8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1058ec: 0x24027500  addiu       $v0, $zero, 0x7500
    ctx->pc = 0x1058ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29952));
    // 0x1058f0: 0xae130268  sw          $s3, 0x268($s0)
    ctx->pc = 0x1058f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 19));
    // 0x1058f4: 0xae020274  sw          $v0, 0x274($s0)
    ctx->pc = 0x1058f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
    // 0x1058f8: 0xae1e0278  sw          $fp, 0x278($s0)
    ctx->pc = 0x1058f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 30));
    // 0x1058fc: 0xae17027c  sw          $s7, 0x27C($s0)
    ctx->pc = 0x1058fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 23));
    // 0x105900: 0xae140280  sw          $s4, 0x280($s0)
    ctx->pc = 0x105900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 20));
    // 0x105904: 0xa215028c  sb          $s5, 0x28C($s0)
    ctx->pc = 0x105904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 652), (uint8_t)GPR_U32(ctx, 21));
    // 0x105908: 0xe6140284  swc1        $f20, 0x284($s0)
    ctx->pc = 0x105908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x10590c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10590Cu;
    {
        const bool branch_taken_0x10590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10590Cu;
            // 0x105910: 0xe6140288  swc1        $f20, 0x288($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10590c) {
            ctx->pc = 0x105920u;
            goto label_105920;
        }
    }
    ctx->pc = 0x105914u;
    // 0x105914: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105918: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105918u;
    SET_GPR_U32(ctx, 31, 0x105920u);
    ctx->pc = 0x10591Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105918u;
            // 0x10591c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105920u; }
        if (ctx->pc != 0x105920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105920u; }
        if (ctx->pc != 0x105920u) { return; }
    }
    ctx->pc = 0x105920u;
label_105920:
    // 0x105920: 0x8f84813c  lw          $a0, -0x7EC4($gp)
    ctx->pc = 0x105920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934844)));
    // 0x105924: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x105924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x105928: 0xae0202f4  sw          $v0, 0x2F4($s0)
    ctx->pc = 0x105928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
    // 0x10592c: 0x34028500  ori         $v0, $zero, 0x8500
    ctx->pc = 0x10592cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34048u)));
    // 0x105930: 0xe6140310  swc1        $f20, 0x310($s0)
    ctx->pc = 0x105930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x105934: 0xae0202f8  sw          $v0, 0x2F8($s0)
    ctx->pc = 0x105934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 2));
    // 0x105938: 0x28830261  slti        $v1, $a0, 0x261
    ctx->pc = 0x105938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)609) ? 1 : 0);
    // 0x10593c: 0x24027500  addiu       $v0, $zero, 0x7500
    ctx->pc = 0x10593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29952));
    // 0x105940: 0xae1102ec  sw          $s1, 0x2EC($s0)
    ctx->pc = 0x105940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 17));
    // 0x105944: 0xae1302f0  sw          $s3, 0x2F0($s0)
    ctx->pc = 0x105944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 19));
    // 0x105948: 0xae0202fc  sw          $v0, 0x2FC($s0)
    ctx->pc = 0x105948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 2));
    // 0x10594c: 0xae1e0300  sw          $fp, 0x300($s0)
    ctx->pc = 0x10594cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 30));
    // 0x105950: 0xae170304  sw          $s7, 0x304($s0)
    ctx->pc = 0x105950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 23));
    // 0x105954: 0xae140308  sw          $s4, 0x308($s0)
    ctx->pc = 0x105954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 20));
    // 0x105958: 0xa2150314  sb          $s5, 0x314($s0)
    ctx->pc = 0x105958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 21));
    // 0x10595c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10595Cu;
    {
        const bool branch_taken_0x10595c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10595Cu;
            // 0x105960: 0xe614030c  swc1        $f20, 0x30C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10595c) {
            ctx->pc = 0x10596Cu;
            goto label_10596c;
        }
    }
    ctx->pc = 0x105964u;
    // 0x105964: 0x24820028  addiu       $v0, $a0, 0x28
    ctx->pc = 0x105964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x105968: 0xaf82813c  sw          $v0, -0x7EC4($gp)
    ctx->pc = 0x105968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 2));
label_10596c:
    // 0x10596c: 0x8f828140  lw          $v0, -0x7EC0($gp)
    ctx->pc = 0x10596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934848)));
    // 0x105970: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x105970u;
    {
        const bool branch_taken_0x105970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105970u;
            // 0x105974: 0x2442fff6  addiu       $v0, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105970) {
            ctx->pc = 0x10597Cu;
            goto label_10597c;
        }
    }
    ctx->pc = 0x105978u;
    // 0x105978: 0xaf828140  sw          $v0, -0x7EC0($gp)
    ctx->pc = 0x105978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934848), GPR_U32(ctx, 2));
label_10597c:
    // 0x10597c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105980: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x105980u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105984: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x105984u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105988: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105988u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10598c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10598cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105990: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105994: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105998: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10599c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10599cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1059a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1059a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1059a4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1059a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1059a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1059A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1059ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059A8u;
            // 0x1059ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105868u: goto label_105868;
            case 0x1058D0u: goto label_1058d0;
            case 0x105920u: goto label_105920;
            case 0x10596Cu: goto label_10596c;
            case 0x10597Cu: goto label_10597c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1059B0u;
}
