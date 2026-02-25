#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_04
// Address: 0x1a6810 - 0x1a6948
void CreateEn4_04_0x1a6810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_04_0x1a6810");
#endif

    ctx->pc = 0x1a6810u;

    // 0x1a6810: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1a6810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1a6814: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a6814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a6818: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a6818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a681c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a681cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a6820: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a6820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a6824: 0x24636980  addiu       $v1, $v1, 0x6980
    ctx->pc = 0x1a6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27008));
    // 0x1a6828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a682c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a682cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6834: 0x24426c50  addiu       $v0, $v0, 0x6C50
    ctx->pc = 0x1a6834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27728));
    // 0x1a6838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a683c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a683cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6840: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1a6840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1a6844: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a6844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6848: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1a6848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1a684c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a684cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a6850: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a6850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a6854: 0x24637f10  addiu       $v1, $v1, 0x7F10
    ctx->pc = 0x1a6854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32528));
    // 0x1a6858: 0x24426950  addiu       $v0, $v0, 0x6950
    ctx->pc = 0x1a6858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26960));
    // 0x1a685c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1a685cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1a6860: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a6864: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1a6864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1a6868: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1a6868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1a686c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A686Cu;
    SET_GPR_U32(ctx, 31, 0x1A6874u);
    ctx->pc = 0x1A6870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A686Cu;
            // 0x1a6870: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6874u; }
        if (ctx->pc != 0x1A6874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6874u; }
        if (ctx->pc != 0x1A6874u) { return; }
    }
    ctx->pc = 0x1A6874u;
    // 0x1a6874: 0xc060544  jal         func_181510
    ctx->pc = 0x1A6874u;
    SET_GPR_U32(ctx, 31, 0x1A687Cu);
    ctx->pc = 0x1A6878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6874u;
            // 0x1a6878: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A687Cu; }
        if (ctx->pc != 0x1A687Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A687Cu; }
        if (ctx->pc != 0x1A687Cu) { return; }
    }
    ctx->pc = 0x1A687Cu;
    // 0x1a687c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a687cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6880: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1a6880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1a6884: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a6884u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6888: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a688c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a688cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a6890: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a6890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a6894: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x1a6894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x1a6898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a689c: 0xe4810120  swc1        $f1, 0x120($a0)
    ctx->pc = 0x1a689cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x1a68a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a68a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a68a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a68a8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1a68a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1a68ac: 0xc4203520  lwc1        $f0, 0x3520($at)
    ctx->pc = 0x1a68acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a68b0: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x1a68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x1a68b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a68b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a68b8: 0x0  nop
    ctx->pc = 0x1a68b8u;
    // NOP
    // 0x1a68bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a68bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a68c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a68c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a68c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a68c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a68c8: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A68C8u;
    {
        const bool branch_taken_0x1a68c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A68CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68C8u;
            // 0x1a68cc: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68c8) {
            ctx->pc = 0x1A6900u;
            goto label_1a6900;
        }
    }
    ctx->pc = 0x1A68D0u;
    // 0x1a68d0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A68D0u;
    {
        const bool branch_taken_0x1a68d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a68d0) {
            ctx->pc = 0x1A68E0u;
            goto label_1a68e0;
        }
    }
    ctx->pc = 0x1A68D8u;
    // 0x1a68d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A68D8u;
    {
        const bool branch_taken_0x1a68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a68d8) {
            ctx->pc = 0x1A6918u;
            goto label_1a6918;
        }
    }
    ctx->pc = 0x1A68E0u;
label_1a68e0:
    // 0x1a68e0: 0x3c023eb3  lui         $v0, 0x3EB3
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16051 << 16));
    // 0x1a68e4: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1a68e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a68e8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a68ec: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a68f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a68f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a68f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A68F4u;
    {
        const bool branch_taken_0x1a68f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A68F4u;
            // 0x1a68f8: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68f4) {
            ctx->pc = 0x1A6918u;
            goto label_1a6918;
        }
    }
    ctx->pc = 0x1A68FCu;
    // 0x1a68fc: 0x0  nop
    ctx->pc = 0x1a68fcu;
    // NOP
label_1a6900:
    // 0x1a6900: 0x3c023eb3  lui         $v0, 0x3EB3
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16051 << 16));
    // 0x1a6904: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1a6904u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a6908: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1a6908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1a690c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1a690cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1a6910: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a6910u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1a6914: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a6914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_1a6918:
    // 0x1a6918: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a6918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a691c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a691cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a6920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6924: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A6924u;
    SET_GPR_U32(ctx, 31, 0x1A692Cu);
    ctx->pc = 0x1A6928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6924u;
            // 0x1a6928: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A692Cu; }
        if (ctx->pc != 0x1A692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A692Cu; }
        if (ctx->pc != 0x1A692Cu) { return; }
    }
    ctx->pc = 0x1A692Cu;
    // 0x1a692c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a692cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a6930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a6934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a693c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a693cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6940: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6940u;
            // 0x1a6944: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A68E0u: goto label_1a68e0;
            case 0x1A6900u: goto label_1a6900;
            case 0x1A6918u: goto label_1a6918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6948u;
}
