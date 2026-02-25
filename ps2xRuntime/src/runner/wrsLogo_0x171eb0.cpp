#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsLogo
// Address: 0x171eb0 - 0x1720b0
void wrsLogo_0x171eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsLogo_0x171eb0");
#endif

    ctx->pc = 0x171eb0u;

    // 0x171eb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x171eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x171eb4: 0x24040134  addiu       $a0, $zero, 0x134
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x171eb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x171eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x171ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ec0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x171ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x171ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ec8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x171ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x171ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x171eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ed0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x171ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x171ed4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x171ed4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x171ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x171edc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x171edcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171ee4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x171ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171eec: 0xc05c20c  jal         func_170830
    ctx->pc = 0x171EECu;
    SET_GPR_U32(ctx, 31, 0x171EF4u);
    ctx->pc = 0x171EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171EECu;
            // 0x171ef0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EF4u; }
        if (ctx->pc != 0x171EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EF4u; }
        if (ctx->pc != 0x171EF4u) { return; }
    }
    ctx->pc = 0x171EF4u;
    // 0x171ef4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x171EF4u;
    SET_GPR_U32(ctx, 31, 0x171EFCu);
    ctx->pc = 0x171EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171EF4u;
            // 0x171ef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EFCu; }
        if (ctx->pc != 0x171EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EFCu; }
        if (ctx->pc != 0x171EFCu) { return; }
    }
    ctx->pc = 0x171EFCu;
    // 0x171efc: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x171EFCu;
    SET_GPR_U32(ctx, 31, 0x171F04u);
    ctx->pc = 0x171F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171EFCu;
            // 0x171f00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F04u; }
        if (ctx->pc != 0x171F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F04u; }
        if (ctx->pc != 0x171F04u) { return; }
    }
    ctx->pc = 0x171F04u;
    // 0x171f04: 0x3c03c380  lui         $v1, 0xC380
    ctx->pc = 0x171f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50048 << 16));
    // 0x171f08: 0x3c02c360  lui         $v0, 0xC360
    ctx->pc = 0x171f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50016 << 16));
    // 0x171f0c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x171f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x171f10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x171f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171f14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x171f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x171f18: 0xc05c83c  jal         func_1720F0
    ctx->pc = 0x171F18u;
    SET_GPR_U32(ctx, 31, 0x171F20u);
    ctx->pc = 0x171F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F18u;
            // 0x171f1c: 0x248409b0  addiu       $a0, $a0, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720F0u;
    if (runtime->hasFunction(0x1720F0u)) {
        auto targetFn = runtime->lookupFunction(0x1720F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F20u; }
        if (ctx->pc != 0x171F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYf_0x1720f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F20u; }
        if (ctx->pc != 0x171F20u) { return; }
    }
    ctx->pc = 0x171F20u;
    // 0x171f20: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x171f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x171f24: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x171f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x171f28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x171f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x171f2c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x171f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171f30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x171f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x171f34: 0xc05c83c  jal         func_1720F0
    ctx->pc = 0x171F34u;
    SET_GPR_U32(ctx, 31, 0x171F3Cu);
    ctx->pc = 0x171F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F34u;
            // 0x171f38: 0x248409c0  addiu       $a0, $a0, 0x9C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720F0u;
    if (runtime->hasFunction(0x1720F0u)) {
        auto targetFn = runtime->lookupFunction(0x1720F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F3Cu; }
        if (ctx->pc != 0x171F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYf_0x1720f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F3Cu; }
        if (ctx->pc != 0x171F3Cu) { return; }
    }
    ctx->pc = 0x171F3Cu;
    // 0x171f3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x171f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171f40: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x171f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x171f44: 0x24840990  addiu       $a0, $a0, 0x990
    ctx->pc = 0x171f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2448));
    // 0x171f48: 0xc05c83c  jal         func_1720F0
    ctx->pc = 0x171F48u;
    SET_GPR_U32(ctx, 31, 0x171F50u);
    ctx->pc = 0x171F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F48u;
            // 0x171f4c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720F0u;
    if (runtime->hasFunction(0x1720F0u)) {
        auto targetFn = runtime->lookupFunction(0x1720F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F50u; }
        if (ctx->pc != 0x171F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYf_0x1720f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F50u; }
        if (ctx->pc != 0x171F50u) { return; }
    }
    ctx->pc = 0x171F50u;
    // 0x171f50: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x171f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x171f54: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x171f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x171f58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x171f5c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x171f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171f60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x171f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x171f64: 0xc05c83c  jal         func_1720F0
    ctx->pc = 0x171F64u;
    SET_GPR_U32(ctx, 31, 0x171F6Cu);
    ctx->pc = 0x171F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F64u;
            // 0x171f68: 0x248409a0  addiu       $a0, $a0, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720F0u;
    if (runtime->hasFunction(0x1720F0u)) {
        auto targetFn = runtime->lookupFunction(0x1720F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F6Cu; }
        if (ctx->pc != 0x171F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYf_0x1720f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F6Cu; }
        if (ctx->pc != 0x171F6Cu) { return; }
    }
    ctx->pc = 0x171F6Cu;
    // 0x171f6c: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x171f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x171f70: 0x27b1008c  addiu       $s1, $sp, 0x8C
    ctx->pc = 0x171f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x171f74: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x171f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x171f78: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171f7c: 0x0  nop
    ctx->pc = 0x171f7cu;
    // NOP
label_171f80:
    // 0x171f80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f84: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x171F84u;
    SET_GPR_U32(ctx, 31, 0x171F8Cu);
    ctx->pc = 0x171F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F84u;
            // 0x171f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F8Cu; }
        if (ctx->pc != 0x171F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F8Cu; }
        if (ctx->pc != 0x171F8Cu) { return; }
    }
    ctx->pc = 0x171F8Cu;
    // 0x171f8c: 0xc05022c  jal         func_1408B0
    ctx->pc = 0x171F8Cu;
    SET_GPR_U32(ctx, 31, 0x171F94u);
    ctx->pc = 0x1408B0u;
    if (runtime->hasFunction(0x1408B0u)) {
        auto targetFn = runtime->lookupFunction(0x1408B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F94u; }
        if (ctx->pc != 0x171F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsHiGsCtxRegist2D_0x1408b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F94u; }
        if (ctx->pc != 0x171F94u) { return; }
    }
    ctx->pc = 0x171F94u;
    // 0x171f94: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171f98: 0xc05c25c  jal         func_170970
    ctx->pc = 0x171F98u;
    SET_GPR_U32(ctx, 31, 0x171FA0u);
    ctx->pc = 0x171F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F98u;
            // 0x171f9c: 0x8c247670  lw          $a0, 0x7670($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170970u;
    if (runtime->hasFunction(0x170970u)) {
        auto targetFn = runtime->lookupFunction(0x170970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FA0u; }
        if (ctx->pc != 0x171FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGpKickChain_0x170970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FA0u; }
        if (ctx->pc != 0x171FA0u) { return; }
    }
    ctx->pc = 0x171FA0u;
    // 0x171fa0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x171fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x171fa4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x171fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x171fa8: 0x326800ff  andi        $t0, $s3, 0xFF
    ctx->pc = 0x171fa8u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)255u)));
    // 0x171fac: 0x24840980  addiu       $a0, $a0, 0x980
    ctx->pc = 0x171facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2432));
    // 0x171fb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x171fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fb4: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x171FB4u;
    SET_GPR_U32(ctx, 31, 0x171FBCu);
    ctx->pc = 0x171FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FB4u;
            // 0x171fb8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FBCu; }
        if (ctx->pc != 0x171FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FBCu; }
        if (ctx->pc != 0x171FBCu) { return; }
    }
    ctx->pc = 0x171FBCu;
    // 0x171fbc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x171fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x171fc0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x171fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x171fc4: 0x244209b0  addiu       $v0, $v0, 0x9B0
    ctx->pc = 0x171fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2480));
    // 0x171fc8: 0x24630980  addiu       $v1, $v1, 0x980
    ctx->pc = 0x171fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2432));
    // 0x171fcc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x171fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x171fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fd4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x171fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x171fd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x171fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x171fdc: 0x24420990  addiu       $v0, $v0, 0x990
    ctx->pc = 0x171fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x171fe0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x171FE0u;
    SET_GPR_U32(ctx, 31, 0x171FE8u);
    ctx->pc = 0x171FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FE0u;
            // 0x171fe4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FE8u; }
        if (ctx->pc != 0x171FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FE8u; }
        if (ctx->pc != 0x171FE8u) { return; }
    }
    ctx->pc = 0x171FE8u;
    // 0x171fe8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x171fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x171fec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171ff0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x171ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x171ff4: 0xc05c830  jal         func_1720C0
    ctx->pc = 0x171FF4u;
    SET_GPR_U32(ctx, 31, 0x171FFCu);
    ctx->pc = 0x171FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171FF4u;
            // 0x171ff8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720C0u;
    if (runtime->hasFunction(0x1720C0u)) {
        auto targetFn = runtime->lookupFunction(0x1720C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FFCu; }
        if (ctx->pc != 0x171FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1720c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171FFCu; }
        if (ctx->pc != 0x171FFCu) { return; }
    }
    ctx->pc = 0x171FFCu;
    // 0x171ffc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x171ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x172000: 0xc05c82c  jal         func_1720B0
    ctx->pc = 0x172000u;
    SET_GPR_U32(ctx, 31, 0x172008u);
    ctx->pc = 0x172004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172000u;
            // 0x172004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720B0u;
    if (runtime->hasFunction(0x1720B0u)) {
        auto targetFn = runtime->lookupFunction(0x1720B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172008u; }
        if (ctx->pc != 0x172008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1720b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172008u; }
        if (ctx->pc != 0x172008u) { return; }
    }
    ctx->pc = 0x172008u;
    // 0x172008: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x172008u;
    SET_GPR_U32(ctx, 31, 0x172010u);
    ctx->pc = 0x17200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172008u;
            // 0x17200c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172010u; }
        if (ctx->pc != 0x172010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172010u; }
        if (ctx->pc != 0x172010u) { return; }
    }
    ctx->pc = 0x172010u;
    // 0x172010: 0xc043808  jal         func_10E020
    ctx->pc = 0x172010u;
    SET_GPR_U32(ctx, 31, 0x172018u);
    ctx->pc = 0x10E020u;
    if (runtime->hasFunction(0x10E020u)) {
        auto targetFn = runtime->lookupFunction(0x10E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172018u; }
        if (ctx->pc != 0x172018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAWait_0x10e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172018u; }
        if (ctx->pc != 0x172018u) { return; }
    }
    ctx->pc = 0x172018u;
    // 0x172018: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x172018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x17201c: 0xc05c254  jal         func_170950
    ctx->pc = 0x17201Cu;
    SET_GPR_U32(ctx, 31, 0x172024u);
    ctx->pc = 0x172020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17201Cu;
            // 0x172020: 0x8c247670  lw          $a0, 0x7670($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170950u;
    if (runtime->hasFunction(0x170950u)) {
        auto targetFn = runtime->lookupFunction(0x170950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172024u; }
        if (ctx->pc != 0x172024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGpResetChain_0x170950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172024u; }
        if (ctx->pc != 0x172024u) { return; }
    }
    ctx->pc = 0x172024u;
    // 0x172024: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x172024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x172028: 0xc05c778  jal         func_171DE0
    ctx->pc = 0x172028u;
    SET_GPR_U32(ctx, 31, 0x172030u);
    ctx->pc = 0x17202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172028u;
            // 0x17202c: 0x8c247670  lw          $a0, 0x7670($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171DE0u;
    if (runtime->hasFunction(0x171DE0u)) {
        auto targetFn = runtime->lookupFunction(0x171DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172030u; }
        if (ctx->pc != 0x172030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPacketMemClean_0x171de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172030u; }
        if (ctx->pc != 0x172030u) { return; }
    }
    ctx->pc = 0x172030u;
    // 0x172030: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172034: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x172034u;
    SET_GPR_U32(ctx, 31, 0x17203Cu);
    ctx->pc = 0x172038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172034u;
            // 0x172038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17203Cu; }
        if (ctx->pc != 0x17203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17203Cu; }
        if (ctx->pc != 0x17203Cu) { return; }
    }
    ctx->pc = 0x17203Cu;
    // 0x17203c: 0xc05017c  jal         func_1405F0
    ctx->pc = 0x17203Cu;
    SET_GPR_U32(ctx, 31, 0x172044u);
    ctx->pc = 0x1405F0u;
    if (runtime->hasFunction(0x1405F0u)) {
        auto targetFn = runtime->lookupFunction(0x1405F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172044u; }
        if (ctx->pc != 0x172044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDisplayFlush_0x1405f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172044u; }
        if (ctx->pc != 0x172044u) { return; }
    }
    ctx->pc = 0x172044u;
    // 0x172044: 0x2a810040  slti        $at, $s4, 0x40
    ctx->pc = 0x172044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x172048: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x172048u;
    {
        const bool branch_taken_0x172048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172048) {
            ctx->pc = 0x172058u;
            goto label_172058;
        }
    }
    ctx->pc = 0x172050u;
    // 0x172050: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x172050u;
    {
        const bool branch_taken_0x172050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172050u;
            // 0x172054: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172050) {
            ctx->pc = 0x172080u;
            goto label_172080;
        }
    }
    ctx->pc = 0x172058u;
label_172058:
    // 0x172058: 0x2a830078  slti        $v1, $s4, 0x78
    ctx->pc = 0x172058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x17205c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17205Cu;
    {
        const bool branch_taken_0x17205c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17205Cu;
            // 0x172060: 0x2a8100b8  slti        $at, $s4, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17205c) {
            ctx->pc = 0x172080u;
            goto label_172080;
        }
    }
    ctx->pc = 0x172064u;
    // 0x172064: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172064u;
    {
        const bool branch_taken_0x172064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172064) {
            ctx->pc = 0x172078u;
            goto label_172078;
        }
    }
    ctx->pc = 0x17206Cu;
    // 0x17206c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17206Cu;
    {
        const bool branch_taken_0x17206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17206Cu;
            // 0x172070: 0x2673fffe  addiu       $s3, $s3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17206c) {
            ctx->pc = 0x172080u;
            goto label_172080;
        }
    }
    ctx->pc = 0x172074u;
    // 0x172074: 0x0  nop
    ctx->pc = 0x172074u;
    // NOP
label_172078:
    // 0x172078: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x172078u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17207c: 0x0  nop
    ctx->pc = 0x17207cu;
    // NOP
label_172080:
    // 0x172080: 0x16a0ffbf  bnez        $s5, . + 4 + (-0x41 << 2)
    ctx->pc = 0x172080u;
    {
        const bool branch_taken_0x172080 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x172084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172080u;
            // 0x172084: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172080) {
            ctx->pc = 0x171F80u;
            goto label_171f80;
        }
    }
    ctx->pc = 0x172088u;
    // 0x172088: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x172088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17208c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17208cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172090: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x172090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x172094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17209c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17209cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1720a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1720a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1720a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1720a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1720a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1720A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1720ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720A8u;
            // 0x1720ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171F80u: goto label_171f80;
            case 0x172058u: goto label_172058;
            case 0x172078u: goto label_172078;
            case 0x172080u: goto label_172080;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1720B0u;
}
