#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_01Hit
// Address: 0x1d0f20 - 0x1d1084
void Enex2_01Hit_0x1d0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_01Hit_0x1d0f20");
#endif

    ctx->pc = 0x1d0f20u;

    // 0x1d0f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d0f24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d0f28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d0f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d0f2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0f34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0f38: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1d0f38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d0f3c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d0f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d0f40: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d0f44: 0x18800048  blez        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D0F44u;
    {
        const bool branch_taken_0x1d0f44 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D0F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F44u;
            // 0x1d0f48: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f44) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D0F4Cu;
    // 0x1d0f4c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1d0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d0f50: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d0f54: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1d0f58: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1d0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d0f5c: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D0F5Cu;
    {
        const bool branch_taken_0x1d0f5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d0f5c) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D0F64u;
    // 0x1d0f64: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1d0f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d0f68: 0x240309c4  addiu       $v1, $zero, 0x9C4
    ctx->pc = 0x1d0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    // 0x1d0f6c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1d0f70: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d0f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d0f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0f78: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1d0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1d0f7c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d0f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d0f80: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1d0f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0f84: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d0f88: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1D0F88u;
    SET_GPR_U32(ctx, 31, 0x1D0F90u);
    ctx->pc = 0x1D0F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F88u;
            // 0x1d0f8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F90u; }
        if (ctx->pc != 0x1D0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F90u; }
        if (ctx->pc != 0x1D0F90u) { return; }
    }
    ctx->pc = 0x1D0F90u;
    // 0x1d0f90: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d0f94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d0f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f98: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0F98u;
    {
        const bool branch_taken_0x1d0f98 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D0F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F98u;
            // 0x1d0f9c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f98) {
            ctx->pc = 0x1D0FA8u;
            goto label_1d0fa8;
        }
    }
    ctx->pc = 0x1D0FA0u;
    // 0x1d0fa0: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1d0fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1d0fa4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1d0fa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1d0fa8:
    // 0x1d0fa8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1d0fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d0fac: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D0FACu;
    {
        const bool branch_taken_0x1d0fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0fac) {
            ctx->pc = 0x1D1040u;
            goto label_1d1040;
        }
    }
    ctx->pc = 0x1D0FB4u;
    // 0x1d0fb4: 0x0  nop
    ctx->pc = 0x1d0fb4u;
    // NOP
label_1d0fb8:
    // 0x1d0fb8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D0FB8u;
    SET_GPR_U32(ctx, 31, 0x1D0FC0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FC0u; }
        if (ctx->pc != 0x1D0FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FC0u; }
        if (ctx->pc != 0x1D0FC0u) { return; }
    }
    ctx->pc = 0x1D0FC0u;
    // 0x1d0fc0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1d0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1d0fc4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1d0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d0fc8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1d0fc8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d0fcc: 0x0  nop
    ctx->pc = 0x1d0fccu;
    // NOP
    // 0x1d0fd0: 0x0  nop
    ctx->pc = 0x1d0fd0u;
    // NOP
    // 0x1d0fd4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d0fd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d0fd8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D0FD8u;
    SET_GPR_U32(ctx, 31, 0x1D0FE0u);
    ctx->pc = 0x1D0FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FD8u;
            // 0x1d0fdc: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FE0u; }
        if (ctx->pc != 0x1D0FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FE0u; }
        if (ctx->pc != 0x1D0FE0u) { return; }
    }
    ctx->pc = 0x1D0FE0u;
    // 0x1d0fe0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1d0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1d0fe4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1d0fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d0fe8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d0fe8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d0fec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ff0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0ff4: 0x0  nop
    ctx->pc = 0x1d0ff4u;
    // NOP
    // 0x1d0ff8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d0ff8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d0ffc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d1000: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d1000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d1004: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1d1004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d1008: 0x1810  mfhi        $v1
    ctx->pc = 0x1d1008u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d100c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1d100cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d1010: 0xc065944  jal         func_196510
    ctx->pc = 0x1D1010u;
    SET_GPR_U32(ctx, 31, 0x1D1018u);
    ctx->pc = 0x1D1014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1010u;
            // 0x1d1014: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1018u; }
        if (ctx->pc != 0x1D1018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1018u; }
        if (ctx->pc != 0x1D1018u) { return; }
    }
    ctx->pc = 0x1D1018u;
    // 0x1d1018: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1d1018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d101c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d101cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d1020: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1020u;
    {
        const bool branch_taken_0x1d1020 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D1024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1020u;
            // 0x1d1024: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1020) {
            ctx->pc = 0x1D1030u;
            goto label_1d1030;
        }
    }
    ctx->pc = 0x1D1028u;
    // 0x1d1028: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1d1028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1d102c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1d102cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1d1030:
    // 0x1d1030: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1d1030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1034: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D1034u;
    {
        const bool branch_taken_0x1d1034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1034) {
            ctx->pc = 0x1D0FB8u;
            goto label_1d0fb8;
        }
    }
    ctx->pc = 0x1D103Cu;
    // 0x1d103c: 0x0  nop
    ctx->pc = 0x1d103cu;
    // NOP
label_1d1040:
    // 0x1d1040: 0x288300ff  slti        $v1, $a0, 0xFF
    ctx->pc = 0x1d1040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1d1044: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1044u;
    {
        const bool branch_taken_0x1d1044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1044) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D104Cu;
    // 0x1d104c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1d104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d1050: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1054: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1d1054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d1058: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d105c: 0xc065944  jal         func_196510
    ctx->pc = 0x1D105Cu;
    SET_GPR_U32(ctx, 31, 0x1D1064u);
    ctx->pc = 0x1D1060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D105Cu;
            // 0x1d1060: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1064u; }
        if (ctx->pc != 0x1D1064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1064u; }
        if (ctx->pc != 0x1D1064u) { return; }
    }
    ctx->pc = 0x1D1064u;
    // 0x1d1064: 0x0  nop
    ctx->pc = 0x1d1064u;
    // NOP
label_1d1068:
    // 0x1d1068: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d1068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d106c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d106cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1070: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d107c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D107Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D107Cu;
            // 0x1d1080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0FA8u: goto label_1d0fa8;
            case 0x1D0FB8u: goto label_1d0fb8;
            case 0x1D1030u: goto label_1d1030;
            case 0x1D1040u: goto label_1d1040;
            case 0x1D1068u: goto label_1d1068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D1084u;
}
