#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateWeapon_Shot
// Address: 0x152ec0 - 0x1531ec
void CreateWeapon_Shot_0x152ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateWeapon_Shot_0x152ec0");
#endif

    ctx->pc = 0x152ec0u;

    // 0x152ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152ec4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x152ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x152ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152ed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ed4: 0xc054fe8  jal         func_153FA0
    ctx->pc = 0x152ED4u;
    SET_GPR_U32(ctx, 31, 0x152EDCu);
    ctx->pc = 0x152ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152ED4u;
            // 0x152ed8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153FA0u;
    if (runtime->hasFunction(0x153FA0u)) {
        auto targetFn = runtime->lookupFunction(0x153FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EDCu; }
        if (ctx->pc != 0x152EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlWeaponShot_0x153fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EDCu; }
        if (ctx->pc != 0x152EDCu) { return; }
    }
    ctx->pc = 0x152EDCu;
    // 0x152edc: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x152edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x152ee0: 0x14800057  bnez        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x152EE0u;
    {
        const bool branch_taken_0x152ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152ee0) {
            ctx->pc = 0x153040u;
            goto label_153040;
        }
    }
    ctx->pc = 0x152EE8u;
    // 0x152ee8: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152EE8u;
    SET_GPR_U32(ctx, 31, 0x152EF0u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EF0u; }
        if (ctx->pc != 0x152EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EF0u; }
        if (ctx->pc != 0x152EF0u) { return; }
    }
    ctx->pc = 0x152EF0u;
    // 0x152ef0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x152ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x152ef4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x152ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x152ef8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x152ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x152efc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152f00: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x152f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x152f04: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152f08: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x152f0c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x152f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x152f10: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x152f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x152f14: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x152f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x152f18: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x152f1c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x152f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x152f20: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x152f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x152f24: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x152f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x152f28: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x152f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x152f2c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x152f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x152f30: 0xac470034  sw          $a3, 0x34($v0)
    ctx->pc = 0x152f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 7));
    // 0x152f34: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152F34u;
    SET_GPR_U32(ctx, 31, 0x152F3Cu);
    ctx->pc = 0x152F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F34u;
            // 0x152f38: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F3Cu; }
        if (ctx->pc != 0x152F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F3Cu; }
        if (ctx->pc != 0x152F3Cu) { return; }
    }
    ctx->pc = 0x152F3Cu;
    // 0x152f3c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x152f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x152f40: 0x2404ffec  addiu       $a0, $zero, -0x14
    ctx->pc = 0x152f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x152f44: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x152f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x152f48: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x152f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152f4c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x152f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x152f50: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x152f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152f54: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x152f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x152f58: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x152f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x152f5c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x152f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x152f60: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x152f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x152f64: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x152f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x152f68: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x152f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x152f6c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x152f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x152f70: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x152f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x152f74: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x152f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x152f78: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x152f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x152f7c: 0xac460034  sw          $a2, 0x34($v0)
    ctx->pc = 0x152f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
    // 0x152f80: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x152f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x152f84: 0x0  nop
    ctx->pc = 0x152f84u;
    // NOP
label_152f88:
    // 0x152f88: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152F88u;
    SET_GPR_U32(ctx, 31, 0x152F90u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F90u; }
        if (ctx->pc != 0x152F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F90u; }
        if (ctx->pc != 0x152F90u) { return; }
    }
    ctx->pc = 0x152F90u;
    // 0x152f90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x152f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x152f94: 0x2606fff0  addiu       $a2, $s0, -0x10
    ctx->pc = 0x152f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x152f98: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x152f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x152f9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152fa0: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x152fa4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x152fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152fa8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x152fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x152fac: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x152facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x152fb0: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x152fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x152fb4: 0x8e27009c  lw          $a3, 0x9C($s1)
    ctx->pc = 0x152fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x152fb8: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x152fbc: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x152fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x152fc0: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x152fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x152fc4: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x152fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x152fc8: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x152fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x152fcc: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x152fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    // 0x152fd0: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x152fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x152fd4: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152FD4u;
    SET_GPR_U32(ctx, 31, 0x152FDCu);
    ctx->pc = 0x152FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152FD4u;
            // 0x152fd8: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FDCu; }
        if (ctx->pc != 0x152FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152FDCu; }
        if (ctx->pc != 0x152FDCu) { return; }
    }
    ctx->pc = 0x152FDCu;
    // 0x152fdc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x152fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x152fe0: 0x104823  negu        $t1, $s0
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x152fe4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x152fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x152fe8: 0x2607fff0  addiu       $a3, $s0, -0x10
    ctx->pc = 0x152fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x152fec: 0x8e280098  lw          $t0, 0x98($s1)
    ctx->pc = 0x152fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x152ff0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x152ff4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ff8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152ffc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153000: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x153000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x153004: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x153008: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x153008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x15300c: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x15300cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153010: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x153010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x153014: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x153014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x153018: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x153018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x15301c: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x15301cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x153020: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x153020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x153024: 0xac490018  sw          $t1, 0x18($v0)
    ctx->pc = 0x153024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
    // 0x153028: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x153028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x15302c: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15302Cu;
    {
        const bool branch_taken_0x15302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15302Cu;
            // 0x153030: 0xac44003c  sw          $a0, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15302c) {
            ctx->pc = 0x152F88u;
            goto label_152f88;
        }
    }
    ctx->pc = 0x153034u;
    // 0x153034: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x153034u;
    {
        const bool branch_taken_0x153034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153034) {
            ctx->pc = 0x1531B0u;
            goto label_1531b0;
        }
    }
    ctx->pc = 0x15303Cu;
    // 0x15303c: 0x0  nop
    ctx->pc = 0x15303cu;
    // NOP
label_153040:
    // 0x153040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153044: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x153044u;
    {
        const bool branch_taken_0x153044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153044) {
            ctx->pc = 0x1530F8u;
            goto label_1530f8;
        }
    }
    ctx->pc = 0x15304Cu;
    // 0x15304c: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x15304Cu;
    SET_GPR_U32(ctx, 31, 0x153054u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153054u; }
        if (ctx->pc != 0x153054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153054u; }
        if (ctx->pc != 0x153054u) { return; }
    }
    ctx->pc = 0x153054u;
    // 0x153054: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x153054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153058: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x153058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15305c: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x15305cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x153060: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x153064: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153068: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x153068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15306c: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x15306cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153070: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x153074: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x153078: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x153078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x15307c: 0x8e27009c  lw          $a3, 0x9C($s1)
    ctx->pc = 0x15307cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x153080: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x153080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x153084: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x153084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x153088: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x153088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x15308c: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x15308cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x153090: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x153090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x153094: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x153094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x153098: 0xac480034  sw          $t0, 0x34($v0)
    ctx->pc = 0x153098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 8));
    // 0x15309c: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x15309Cu;
    SET_GPR_U32(ctx, 31, 0x1530A4u);
    ctx->pc = 0x1530A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15309Cu;
            // 0x1530a0: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530A4u; }
        if (ctx->pc != 0x1530A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1530A4u; }
        if (ctx->pc != 0x1530A4u) { return; }
    }
    ctx->pc = 0x1530A4u;
    // 0x1530a4: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1530a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1530a8: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x1530a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1530ac: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x1530acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x1530b0: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1530b4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1530b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1530b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1530b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1530bc: 0x8e280098  lw          $t0, 0x98($s1)
    ctx->pc = 0x1530bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1530c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1530c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1530c4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1530c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1530c8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1530c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1530cc: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x1530ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x1530d0: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1530d4: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1530d8: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1530d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1530dc: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1530dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1530e0: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x1530e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x1530e4: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x1530e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x1530e8: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1530e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1530ec: 0xac490034  sw          $t1, 0x34($v0)
    ctx->pc = 0x1530ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 9));
    // 0x1530f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1530F0u;
    {
        const bool branch_taken_0x1530f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1530F0u;
            // 0x1530f4: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530f0) {
            ctx->pc = 0x1531B0u;
            goto label_1531b0;
        }
    }
    ctx->pc = 0x1530F8u;
label_1530f8:
    // 0x1530f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1530f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1530fc: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1530FCu;
    {
        const bool branch_taken_0x1530fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1530fc) {
            ctx->pc = 0x1531B0u;
            goto label_1531b0;
        }
    }
    ctx->pc = 0x153104u;
    // 0x153104: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153104u;
    SET_GPR_U32(ctx, 31, 0x15310Cu);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15310Cu; }
        if (ctx->pc != 0x15310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15310Cu; }
        if (ctx->pc != 0x15310Cu) { return; }
    }
    ctx->pc = 0x15310Cu;
    // 0x15310c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x15310cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153110: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x153110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x153114: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x153114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x153118: 0x2406fff4  addiu       $a2, $zero, -0xC
    ctx->pc = 0x153118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x15311c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x15311cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153124: 0x8e280098  lw          $t0, 0x98($s1)
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15312c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x15312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x153130: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x153130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x153134: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x153134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x153138: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x153138u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x15313c: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x15313cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x153140: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x153140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x153144: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x153144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x153148: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x153148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x15314c: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x15314cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x153150: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x153150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x153154: 0xac490034  sw          $t1, 0x34($v0)
    ctx->pc = 0x153154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 9));
    // 0x153158: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153158u;
    SET_GPR_U32(ctx, 31, 0x153160u);
    ctx->pc = 0x15315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153158u;
            // 0x15315c: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153160u; }
        if (ctx->pc != 0x153160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153160u; }
        if (ctx->pc != 0x153160u) { return; }
    }
    ctx->pc = 0x153160u;
    // 0x153160: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x153160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153164: 0x2406fff4  addiu       $a2, $zero, -0xC
    ctx->pc = 0x153164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x153168: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x153168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x15316c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153170: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x153170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x153174: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x153174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x153178: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x153178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x15317c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x15317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x153180: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x153180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x153184: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x153184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x153188: 0x8e27009c  lw          $a3, 0x9C($s1)
    ctx->pc = 0x153188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x15318c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x15318cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x153190: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x153190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x153194: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x153194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x153198: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x153198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x15319c: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x15319cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x1531a0: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1531a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1531a4: 0xac480034  sw          $t0, 0x34($v0)
    ctx->pc = 0x1531a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 8));
    // 0x1531a8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1531a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1531ac: 0x0  nop
    ctx->pc = 0x1531acu;
    // NOP
label_1531b0:
    // 0x1531b0: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1531b4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1531b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1531b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1531B8u;
    {
        const bool branch_taken_0x1531b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1531b8) {
            ctx->pc = 0x1531D0u;
            goto label_1531d0;
        }
    }
    ctx->pc = 0x1531C0u;
    // 0x1531c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1531c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1531C4u;
    {
        const bool branch_taken_0x1531c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531C4u;
            // 0x1531c8: 0xae2300a4  sw          $v1, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531c4) {
            ctx->pc = 0x1531D8u;
            goto label_1531d8;
        }
    }
    ctx->pc = 0x1531CCu;
    // 0x1531cc: 0x0  nop
    ctx->pc = 0x1531ccu;
    // NOP
label_1531d0:
    // 0x1531d0: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x1531d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x1531d4: 0x0  nop
    ctx->pc = 0x1531d4u;
    // NOP
label_1531d8:
    // 0x1531d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1531d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1531dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1531dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1531e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1531e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1531e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1531E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1531E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1531E4u;
            // 0x1531e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152F88u: goto label_152f88;
            case 0x153040u: goto label_153040;
            case 0x1530F8u: goto label_1530f8;
            case 0x1531B0u: goto label_1531b0;
            case 0x1531D0u: goto label_1531d0;
            case 0x1531D8u: goto label_1531d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1531ECu;
}
