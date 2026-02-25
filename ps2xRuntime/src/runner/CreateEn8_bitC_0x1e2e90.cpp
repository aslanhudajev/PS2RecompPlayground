#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn8_bitC
// Address: 0x1e2e90 - 0x1e3074
void CreateEn8_bitC_0x1e2e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn8_bitC_0x1e2e90");
#endif

    ctx->pc = 0x1e2e90u;

    // 0x1e2e90: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1e2e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1e2e94: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e2e98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e2e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e2e9c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e2ea0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e2ea4: 0x24633280  addiu       $v1, $v1, 0x3280
    ctx->pc = 0x1e2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12928));
    // 0x1e2ea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e2eac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e2eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2eb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2eb4: 0x244236b0  addiu       $v0, $v0, 0x36B0
    ctx->pc = 0x1e2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x1e2eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2ebc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e2ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ec0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1e2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1e2ec4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e2ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ec8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1e2ecc: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e2ed0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e2ed4: 0x24634fa0  addiu       $v1, $v1, 0x4FA0
    ctx->pc = 0x1e2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20384));
    // 0x1e2ed8: 0x24423250  addiu       $v0, $v0, 0x3250
    ctx->pc = 0x1e2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12880));
    // 0x1e2edc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1e2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1e2ee0: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1e2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1e2ee4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1e2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1e2ee8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1e2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1e2eec: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E2EECu;
    SET_GPR_U32(ctx, 31, 0x1E2EF4u);
    ctx->pc = 0x1E2EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EECu;
            // 0x1e2ef0: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EF4u; }
        if (ctx->pc != 0x1E2EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EF4u; }
        if (ctx->pc != 0x1E2EF4u) { return; }
    }
    ctx->pc = 0x1E2EF4u;
    // 0x1e2ef4: 0xc060544  jal         func_181510
    ctx->pc = 0x1E2EF4u;
    SET_GPR_U32(ctx, 31, 0x1E2EFCu);
    ctx->pc = 0x1E2EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EF4u;
            // 0x1e2ef8: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EFCu; }
        if (ctx->pc != 0x1E2EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EFCu; }
        if (ctx->pc != 0x1E2EFCu) { return; }
    }
    ctx->pc = 0x1E2EFCu;
    // 0x1e2efc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1e2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1e2f00: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1e2f00u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2f04: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x1e2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x1e2f08: 0x2e61000a  sltiu       $at, $s3, 0xA
    ctx->pc = 0x1e2f08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1e2f0c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1e2f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1e2f10: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e2f10u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f14: 0x0  nop
    ctx->pc = 0x1e2f14u;
    // NOP
    // 0x1e2f18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e2f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e2f1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2f20: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1e2f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1e2f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2f28: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2f2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1e2f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1e2f30: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x1e2f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x1e2f34: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1E2F34u;
    {
        const bool branch_taken_0x1e2f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F34u;
            // 0x1e2f38: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f34) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2F3Cu;
    // 0x1e2f3c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e2f40: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1e2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e2f44: 0x24632e10  addiu       $v1, $v1, 0x2E10
    ctx->pc = 0x1e2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11792));
    // 0x1e2f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2f4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2f50: 0x400008  jr          $v0
    ctx->pc = 0x1E2F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2F58u: goto label_1e2f58;
            case 0x1E2F70u: goto label_1e2f70;
            case 0x1E2F88u: goto label_1e2f88;
            case 0x1E2FA0u: goto label_1e2fa0;
            case 0x1E2FB8u: goto label_1e2fb8;
            case 0x1E2FD0u: goto label_1e2fd0;
            case 0x1E2FE0u: goto label_1e2fe0;
            case 0x1E2FF8u: goto label_1e2ff8;
            case 0x1E3010u: goto label_1e3010;
            case 0x1E3028u: goto label_1e3028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2F58u;
label_1e2f58:
    // 0x1e2f58: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1e2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1e2f5c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1e2f5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2f60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2f64: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e2f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e2f68: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E2F68u;
    {
        const bool branch_taken_0x1e2f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F68u;
            // 0x1e2f6c: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f68) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2F70u;
label_1e2f70:
    // 0x1e2f70: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1e2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x1e2f74: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1e2f74u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2f78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2f7c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e2f80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1E2F80u;
    {
        const bool branch_taken_0x1e2f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F80u;
            // 0x1e2f84: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f80) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2F88u;
label_1e2f88:
    // 0x1e2f88: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1e2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1e2f8c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e2f8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2f90: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e2f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e2f94: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E2F94u;
    {
        const bool branch_taken_0x1e2f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F94u;
            // 0x1e2f98: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f94) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2F9Cu;
    // 0x1e2f9c: 0x0  nop
    ctx->pc = 0x1e2f9cu;
    // NOP
label_1e2fa0:
    // 0x1e2fa0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e2fa4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e2fa4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e2fa8: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e2fac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E2FACu;
    {
        const bool branch_taken_0x1e2fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FACu;
            // 0x1e2fb0: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fac) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2FB4u;
    // 0x1e2fb4: 0x0  nop
    ctx->pc = 0x1e2fb4u;
    // NOP
label_1e2fb8:
    // 0x1e2fb8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1e2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1e2fbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e2fbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2fc0: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e2fc4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E2FC4u;
    {
        const bool branch_taken_0x1e2fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FC4u;
            // 0x1e2fc8: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fc4) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2FCCu;
    // 0x1e2fcc: 0x0  nop
    ctx->pc = 0x1e2fccu;
    // NOP
label_1e2fd0:
    // 0x1e2fd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2fd4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e2fd8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E2FD8u;
    {
        const bool branch_taken_0x1e2fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FD8u;
            // 0x1e2fdc: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fd8) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2FE0u;
label_1e2fe0:
    // 0x1e2fe0: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x1e2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x1e2fe4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e2fe4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2fe8: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e2fec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E2FECu;
    {
        const bool branch_taken_0x1e2fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FECu;
            // 0x1e2ff0: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fec) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E2FF4u;
    // 0x1e2ff4: 0x0  nop
    ctx->pc = 0x1e2ff4u;
    // NOP
label_1e2ff8:
    // 0x1e2ff8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1e2ffc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e2ffcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e3000: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e3000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e3004: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E3004u;
    {
        const bool branch_taken_0x1e3004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3004u;
            // 0x1e3008: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3004) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E300Cu;
    // 0x1e300c: 0x0  nop
    ctx->pc = 0x1e300cu;
    // NOP
label_1e3010:
    // 0x1e3010: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1e3010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x1e3014: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e3014u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e3018: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e3018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e301c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E301Cu;
    {
        const bool branch_taken_0x1e301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E301Cu;
            // 0x1e3020: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e301c) {
            ctx->pc = 0x1E3038u;
            goto label_1e3038;
        }
    }
    ctx->pc = 0x1E3024u;
    // 0x1e3024: 0x0  nop
    ctx->pc = 0x1e3024u;
    // NOP
label_1e3028:
    // 0x1e3028: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e3028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e302c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1e302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1e3030: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1e3030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1e3034: 0x0  nop
    ctx->pc = 0x1e3034u;
    // NOP
label_1e3038:
    // 0x1e3038: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1e3038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1e303c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e3040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3044: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e3044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e3048: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E3048u;
    SET_GPR_U32(ctx, 31, 0x1E3050u);
    ctx->pc = 0x1E304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3048u;
            // 0x1e304c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3050u; }
        if (ctx->pc != 0x1E3050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3050u; }
        if (ctx->pc != 0x1E3050u) { return; }
    }
    ctx->pc = 0x1E3050u;
    // 0x1e3050: 0xc078dac  jal         func_1E36B0
    ctx->pc = 0x1E3050u;
    SET_GPR_U32(ctx, 31, 0x1E3058u);
    ctx->pc = 0x1E3054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3050u;
            // 0x1e3054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E36B0u;
    if (runtime->hasFunction(0x1E36B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E36B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3058u; }
        if (ctx->pc != 0x1E3058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_bitMoveC_0x1e36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3058u; }
        if (ctx->pc != 0x1E3058u) { return; }
    }
    ctx->pc = 0x1E3058u;
    // 0x1e3058: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e3058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e305c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e305cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e306c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E306Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E306Cu;
            // 0x1e3070: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2F58u: goto label_1e2f58;
            case 0x1E2F70u: goto label_1e2f70;
            case 0x1E2F88u: goto label_1e2f88;
            case 0x1E2FA0u: goto label_1e2fa0;
            case 0x1E2FB8u: goto label_1e2fb8;
            case 0x1E2FD0u: goto label_1e2fd0;
            case 0x1E2FE0u: goto label_1e2fe0;
            case 0x1E2FF8u: goto label_1e2ff8;
            case 0x1E3010u: goto label_1e3010;
            case 0x1E3028u: goto label_1e3028;
            case 0x1E3038u: goto label_1e3038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3074u;
}
