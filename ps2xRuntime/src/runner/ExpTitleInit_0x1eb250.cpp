#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExpTitleInit
// Address: 0x1eb250 - 0x1eb72c
void ExpTitleInit_0x1eb250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExpTitleInit_0x1eb250");
#endif

    ctx->pc = 0x1eb250u;

    // 0x1eb250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb254: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x1eb254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1eb258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb25c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1eb25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1eb260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb264: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1EB264u;
    SET_GPR_U32(ctx, 31, 0x1EB26Cu);
    ctx->pc = 0x1EB268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB264u;
            // 0x1eb268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB26Cu; }
        if (ctx->pc != 0x1EB26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB26Cu; }
        if (ctx->pc != 0x1EB26Cu) { return; }
    }
    ctx->pc = 0x1EB26Cu;
    // 0x1eb26c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EB26Cu;
    SET_GPR_U32(ctx, 31, 0x1EB274u);
    ctx->pc = 0x1EB270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB26Cu;
            // 0x1eb270: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB274u; }
        if (ctx->pc != 0x1EB274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB274u; }
        if (ctx->pc != 0x1EB274u) { return; }
    }
    ctx->pc = 0x1EB274u;
    // 0x1eb274: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1EB274u;
    SET_GPR_U32(ctx, 31, 0x1EB27Cu);
    ctx->pc = 0x1EB278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB274u;
            // 0x1eb278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB27Cu; }
        if (ctx->pc != 0x1EB27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB27Cu; }
        if (ctx->pc != 0x1EB27Cu) { return; }
    }
    ctx->pc = 0x1EB27Cu;
    // 0x1eb27c: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x1eb27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x1eb280: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1eb280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1eb284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb288: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1EB288u;
    SET_GPR_U32(ctx, 31, 0x1EB290u);
    ctx->pc = 0x1EB28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB288u;
            // 0x1eb28c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB290u; }
        if (ctx->pc != 0x1EB290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB290u; }
        if (ctx->pc != 0x1EB290u) { return; }
    }
    ctx->pc = 0x1EB290u;
    // 0x1eb290: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EB290u;
    SET_GPR_U32(ctx, 31, 0x1EB298u);
    ctx->pc = 0x1EB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB290u;
            // 0x1eb294: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB298u; }
        if (ctx->pc != 0x1EB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB298u; }
        if (ctx->pc != 0x1EB298u) { return; }
    }
    ctx->pc = 0x1EB298u;
    // 0x1eb298: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1EB298u;
    SET_GPR_U32(ctx, 31, 0x1EB2A0u);
    ctx->pc = 0x1EB29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB298u;
            // 0x1eb29c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2A0u; }
        if (ctx->pc != 0x1EB2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2A0u; }
        if (ctx->pc != 0x1EB2A0u) { return; }
    }
    ctx->pc = 0x1EB2A0u;
    // 0x1eb2a0: 0x24040133  addiu       $a0, $zero, 0x133
    ctx->pc = 0x1eb2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
    // 0x1eb2a4: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1eb2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1eb2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2ac: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1EB2ACu;
    SET_GPR_U32(ctx, 31, 0x1EB2B4u);
    ctx->pc = 0x1EB2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2ACu;
            // 0x1eb2b0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B4u; }
        if (ctx->pc != 0x1EB2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B4u; }
        if (ctx->pc != 0x1EB2B4u) { return; }
    }
    ctx->pc = 0x1EB2B4u;
    // 0x1eb2b4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EB2B4u;
    SET_GPR_U32(ctx, 31, 0x1EB2BCu);
    ctx->pc = 0x1EB2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2B4u;
            // 0x1eb2b8: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2BCu; }
        if (ctx->pc != 0x1EB2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2BCu; }
        if (ctx->pc != 0x1EB2BCu) { return; }
    }
    ctx->pc = 0x1EB2BCu;
    // 0x1eb2bc: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1EB2BCu;
    SET_GPR_U32(ctx, 31, 0x1EB2C4u);
    ctx->pc = 0x1EB2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2BCu;
            // 0x1eb2c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2C4u; }
        if (ctx->pc != 0x1EB2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2C4u; }
        if (ctx->pc != 0x1EB2C4u) { return; }
    }
    ctx->pc = 0x1EB2C4u;
    // 0x1eb2c4: 0x24040132  addiu       $a0, $zero, 0x132
    ctx->pc = 0x1eb2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1eb2c8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1eb2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1eb2cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eb2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb2d0: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1EB2D0u;
    SET_GPR_U32(ctx, 31, 0x1EB2D8u);
    ctx->pc = 0x1EB2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2D0u;
            // 0x1eb2d4: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2D8u; }
        if (ctx->pc != 0x1EB2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2D8u; }
        if (ctx->pc != 0x1EB2D8u) { return; }
    }
    ctx->pc = 0x1EB2D8u;
    // 0x1eb2d8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EB2D8u;
    SET_GPR_U32(ctx, 31, 0x1EB2E0u);
    ctx->pc = 0x1EB2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2D8u;
            // 0x1eb2dc: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2E0u; }
        if (ctx->pc != 0x1EB2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2E0u; }
        if (ctx->pc != 0x1EB2E0u) { return; }
    }
    ctx->pc = 0x1EB2E0u;
    // 0x1eb2e0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1EB2E0u;
    SET_GPR_U32(ctx, 31, 0x1EB2E8u);
    ctx->pc = 0x1EB2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2E0u;
            // 0x1eb2e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2E8u; }
        if (ctx->pc != 0x1EB2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2E8u; }
        if (ctx->pc != 0x1EB2E8u) { return; }
    }
    ctx->pc = 0x1EB2E8u;
    // 0x1eb2e8: 0x24040135  addiu       $a0, $zero, 0x135
    ctx->pc = 0x1eb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x1eb2ec: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x1EB2ECu;
    SET_GPR_U32(ctx, 31, 0x1EB2F4u);
    ctx->pc = 0x1EB2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2ECu;
            // 0x1eb2f0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2F4u; }
        if (ctx->pc != 0x1EB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2F4u; }
        if (ctx->pc != 0x1EB2F4u) { return; }
    }
    ctx->pc = 0x1EB2F4u;
    // 0x1eb2f4: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x1eb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x1eb2f8: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x1eb2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x1eb2fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb300: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb304: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb308: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb30c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb30cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb310: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb314: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB314u;
    SET_GPR_U32(ctx, 31, 0x1EB31Cu);
    ctx->pc = 0x1EB318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB314u;
            // 0x1eb318: 0x24843810  addiu       $a0, $a0, 0x3810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB31Cu; }
        if (ctx->pc != 0x1EB31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB31Cu; }
        if (ctx->pc != 0x1EB31Cu) { return; }
    }
    ctx->pc = 0x1EB31Cu;
    // 0x1eb31c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1eb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1eb320: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1eb320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1eb324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb328: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb32c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb330: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb334: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb334u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb338: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb33c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB33Cu;
    SET_GPR_U32(ctx, 31, 0x1EB344u);
    ctx->pc = 0x1EB340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB33Cu;
            // 0x1eb340: 0x24843820  addiu       $a0, $a0, 0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB344u; }
        if (ctx->pc != 0x1EB344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB344u; }
        if (ctx->pc != 0x1EB344u) { return; }
    }
    ctx->pc = 0x1EB344u;
    // 0x1eb344: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb34c: 0x248437f0  addiu       $a0, $a0, 0x37F0
    ctx->pc = 0x1eb34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14320));
    // 0x1eb350: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB350u;
    SET_GPR_U32(ctx, 31, 0x1EB358u);
    ctx->pc = 0x1EB354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB350u;
            // 0x1eb354: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB358u; }
        if (ctx->pc != 0x1EB358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB358u; }
        if (ctx->pc != 0x1EB358u) { return; }
    }
    ctx->pc = 0x1EB358u;
    // 0x1eb358: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb35c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1eb35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1eb360: 0x24843800  addiu       $a0, $a0, 0x3800
    ctx->pc = 0x1eb360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14336));
    // 0x1eb364: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB364u;
    SET_GPR_U32(ctx, 31, 0x1EB36Cu);
    ctx->pc = 0x1EB368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB364u;
            // 0x1eb368: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB36Cu; }
        if (ctx->pc != 0x1EB36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB36Cu; }
        if (ctx->pc != 0x1EB36Cu) { return; }
    }
    ctx->pc = 0x1EB36Cu;
    // 0x1eb36c: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x1eb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x1eb370: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x1eb370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x1eb374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb378: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb37c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb380: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb384: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb384u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb388: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb38c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB38Cu;
    SET_GPR_U32(ctx, 31, 0x1EB394u);
    ctx->pc = 0x1EB390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB38Cu;
            // 0x1eb390: 0x248437d0  addiu       $a0, $a0, 0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB394u; }
        if (ctx->pc != 0x1EB394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB394u; }
        if (ctx->pc != 0x1EB394u) { return; }
    }
    ctx->pc = 0x1EB394u;
    // 0x1eb394: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1eb394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1eb398: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1eb398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1eb39c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb3a0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb3a4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb3a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb3a8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb3ac: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb3acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb3b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb3b4: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB3B4u;
    SET_GPR_U32(ctx, 31, 0x1EB3BCu);
    ctx->pc = 0x1EB3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3B4u;
            // 0x1eb3b8: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3BCu; }
        if (ctx->pc != 0x1EB3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3BCu; }
        if (ctx->pc != 0x1EB3BCu) { return; }
    }
    ctx->pc = 0x1EB3BCu;
    // 0x1eb3bc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb3c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3c4: 0x248437b0  addiu       $a0, $a0, 0x37B0
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14256));
    // 0x1eb3c8: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB3C8u;
    SET_GPR_U32(ctx, 31, 0x1EB3D0u);
    ctx->pc = 0x1EB3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3C8u;
            // 0x1eb3cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3D0u; }
        if (ctx->pc != 0x1EB3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3D0u; }
        if (ctx->pc != 0x1EB3D0u) { return; }
    }
    ctx->pc = 0x1EB3D0u;
    // 0x1eb3d0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb3d4: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1eb3d8: 0x248437c0  addiu       $a0, $a0, 0x37C0
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14272));
    // 0x1eb3dc: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB3DCu;
    SET_GPR_U32(ctx, 31, 0x1EB3E4u);
    ctx->pc = 0x1EB3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3DCu;
            // 0x1eb3e0: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3E4u; }
        if (ctx->pc != 0x1EB3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3E4u; }
        if (ctx->pc != 0x1EB3E4u) { return; }
    }
    ctx->pc = 0x1EB3E4u;
    // 0x1eb3e4: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x1eb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x1eb3e8: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x1eb3ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb3f0: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb3f4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb3f8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb3fc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb3fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb400: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb404: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB404u;
    SET_GPR_U32(ctx, 31, 0x1EB40Cu);
    ctx->pc = 0x1EB408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB404u;
            // 0x1eb408: 0x24843790  addiu       $a0, $a0, 0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB40Cu; }
        if (ctx->pc != 0x1EB40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB40Cu; }
        if (ctx->pc != 0x1EB40Cu) { return; }
    }
    ctx->pc = 0x1EB40Cu;
    // 0x1eb40c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1eb410: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1eb410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1eb414: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb418: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb41c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb420: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb424: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb424u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb428: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb42c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB42Cu;
    SET_GPR_U32(ctx, 31, 0x1EB434u);
    ctx->pc = 0x1EB430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB42Cu;
            // 0x1eb430: 0x248437a0  addiu       $a0, $a0, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB434u; }
        if (ctx->pc != 0x1EB434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB434u; }
        if (ctx->pc != 0x1EB434u) { return; }
    }
    ctx->pc = 0x1EB434u;
    // 0x1eb434: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb43c: 0x24843770  addiu       $a0, $a0, 0x3770
    ctx->pc = 0x1eb43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14192));
    // 0x1eb440: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB440u;
    SET_GPR_U32(ctx, 31, 0x1EB448u);
    ctx->pc = 0x1EB444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB440u;
            // 0x1eb444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB448u; }
        if (ctx->pc != 0x1EB448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB448u; }
        if (ctx->pc != 0x1EB448u) { return; }
    }
    ctx->pc = 0x1EB448u;
    // 0x1eb448: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb44c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1eb44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1eb450: 0x24843780  addiu       $a0, $a0, 0x3780
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14208));
    // 0x1eb454: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB454u;
    SET_GPR_U32(ctx, 31, 0x1EB45Cu);
    ctx->pc = 0x1EB458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB454u;
            // 0x1eb458: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB45Cu; }
        if (ctx->pc != 0x1EB45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB45Cu; }
        if (ctx->pc != 0x1EB45Cu) { return; }
    }
    ctx->pc = 0x1EB45Cu;
    // 0x1eb45c: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x1eb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x1eb460: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x1eb460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x1eb464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb468: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb46c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb470: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb474: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb474u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb478: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb47c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB47Cu;
    SET_GPR_U32(ctx, 31, 0x1EB484u);
    ctx->pc = 0x1EB480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB47Cu;
            // 0x1eb480: 0x24843750  addiu       $a0, $a0, 0x3750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB484u; }
        if (ctx->pc != 0x1EB484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB484u; }
        if (ctx->pc != 0x1EB484u) { return; }
    }
    ctx->pc = 0x1EB484u;
    // 0x1eb484: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1eb484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1eb488: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1eb488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1eb48c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb490: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb494: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1eb494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eb498: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eb498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb49c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eb49cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb4a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eb4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb4a4: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB4A4u;
    SET_GPR_U32(ctx, 31, 0x1EB4ACu);
    ctx->pc = 0x1EB4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4A4u;
            // 0x1eb4a8: 0x24843760  addiu       $a0, $a0, 0x3760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4ACu; }
        if (ctx->pc != 0x1EB4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4ACu; }
        if (ctx->pc != 0x1EB4ACu) { return; }
    }
    ctx->pc = 0x1EB4ACu;
    // 0x1eb4ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1eb4b0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1EB4B0u;
    SET_GPR_U32(ctx, 31, 0x1EB4B8u);
    ctx->pc = 0x1EB4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4B0u;
            // 0x1eb4b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4B8u; }
        if (ctx->pc != 0x1EB4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4B8u; }
        if (ctx->pc != 0x1EB4B8u) { return; }
    }
    ctx->pc = 0x1EB4B8u;
    // 0x1eb4b8: 0x3c0d0044  lui         $t5, 0x44
    ctx->pc = 0x1eb4b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)68 << 16));
    // 0x1eb4bc: 0x3c0b0044  lui         $t3, 0x44
    ctx->pc = 0x1eb4bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)68 << 16));
    // 0x1eb4c0: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x1eb4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
    // 0x1eb4c4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1eb4c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4c8: 0x25ad3550  addiu       $t5, $t5, 0x3550
    ctx->pc = 0x1eb4c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13648));
    // 0x1eb4cc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1eb4ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb4d0: 0x256b3350  addiu       $t3, $t3, 0x3350
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13136));
    // 0x1eb4d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eb4d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4d8: 0x25293310  addiu       $t1, $t1, 0x3310
    ctx->pc = 0x1eb4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13072));
    // 0x1eb4dc: 0x0  nop
    ctx->pc = 0x1eb4dcu;
    // NOP
label_1eb4e0:
    // 0x1eb4e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1eb4e4: 0x6e1823  subu        $v1, $v1, $t6
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1eb4e8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1eb4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb4ec: 0x3c05477f  lui         $a1, 0x477F
    ctx->pc = 0x1eb4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb4f0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb4f4: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1eb4f4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb4f8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1eb4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4fc: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x1eb4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eb500: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eb500u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb504: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x1eb504u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1eb508: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1eb508u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb50c: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1eb510: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eb510u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb514: 0x0  nop
    ctx->pc = 0x1eb514u;
    // NOP
    // 0x1eb518: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eb518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eb51c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB51Cu;
    SET_GPR_U32(ctx, 31, 0x1EB524u);
    ctx->pc = 0x1EB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB51Cu;
            // 0x1eb520: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB524u; }
        if (ctx->pc != 0x1EB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB524u; }
        if (ctx->pc != 0x1EB524u) { return; }
    }
    ctx->pc = 0x1EB524u;
    // 0x1eb524: 0x8c580014  lw          $t8, 0x14($v0)
    ctx->pc = 0x1eb524u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eb528: 0x3c05477f  lui         $a1, 0x477F
    ctx->pc = 0x1eb528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb52c: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x1eb52cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb530: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1eb530u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb534: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1eb534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb538: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eb538u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb53c: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1eb53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eb540: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb544: 0xc3900  sll         $a3, $t4, 4
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1eb548: 0x24843550  addiu       $a0, $a0, 0x3550
    ctx->pc = 0x1eb548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
    // 0x1eb54c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1eb54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1eb550: 0x30f2821  addu        $a1, $t8, $t7
    ctx->pc = 0x1eb550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x1eb554: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1eb558: 0x25030008  addiu       $v1, $t0, 0x8
    ctx->pc = 0x1eb558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1eb55c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1eb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1eb560: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1eb560u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb568: 0x0  nop
    ctx->pc = 0x1eb568u;
    // NOP
    // 0x1eb56c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eb56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eb570: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB570u;
    SET_GPR_U32(ctx, 31, 0x1EB578u);
    ctx->pc = 0x1EB574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB570u;
            // 0x1eb574: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB578u; }
        if (ctx->pc != 0x1EB578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB578u; }
        if (ctx->pc != 0x1EB578u) { return; }
    }
    ctx->pc = 0x1EB578u;
    // 0x1eb578: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1eb578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb57c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eb57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb580: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB580u;
    SET_GPR_U32(ctx, 31, 0x1EB588u);
    ctx->pc = 0x1EB584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB580u;
            // 0x1eb584: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB588u; }
        if (ctx->pc != 0x1EB588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB588u; }
        if (ctx->pc != 0x1EB588u) { return; }
    }
    ctx->pc = 0x1EB588u;
    // 0x1eb588: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eb58c: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb590: 0x24633350  addiu       $v1, $v1, 0x3350
    ctx->pc = 0x1eb590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13136));
    // 0x1eb594: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eb598: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1eb598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eb59c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eb59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb5a0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1eb5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eb5a4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1eb5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1eb5a8: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB5A8u;
    SET_GPR_U32(ctx, 31, 0x1EB5B0u);
    ctx->pc = 0x1EB5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5A8u;
            // 0x1eb5ac: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5B0u; }
        if (ctx->pc != 0x1EB5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5B0u; }
        if (ctx->pc != 0x1EB5B0u) { return; }
    }
    ctx->pc = 0x1EB5B0u;
    // 0x1eb5b0: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x1eb5b0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)255u)));
    // 0x1eb5b4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1eb5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eb5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5bc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1eb5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb5c0: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EB5C0u;
    SET_GPR_U32(ctx, 31, 0x1EB5C8u);
    ctx->pc = 0x1EB5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5C0u;
            // 0x1eb5c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5C8u; }
        if (ctx->pc != 0x1EB5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5C8u; }
        if (ctx->pc != 0x1EB5C8u) { return; }
    }
    ctx->pc = 0x1EB5C8u;
    // 0x1eb5c8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1eb5c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1eb5cc: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1eb5ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1eb5d0: 0x29c30010  slti        $v1, $t6, 0x10
    ctx->pc = 0x1eb5d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eb5d4: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x1eb5d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x1eb5d8: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x1eb5d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x1eb5dc: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1eb5dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1eb5e0: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1EB5E0u;
    {
        const bool branch_taken_0x1eb5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5E0u;
            // 0x1eb5e4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5e0) {
            ctx->pc = 0x1EB4E0u;
            goto label_1eb4e0;
        }
    }
    ctx->pc = 0x1EB5E8u;
    // 0x1eb5e8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1eb5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1eb5ec: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1EB5ECu;
    SET_GPR_U32(ctx, 31, 0x1EB5F4u);
    ctx->pc = 0x1EB5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5ECu;
            // 0x1eb5f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5F4u; }
        if (ctx->pc != 0x1EB5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5F4u; }
        if (ctx->pc != 0x1EB5F4u) { return; }
    }
    ctx->pc = 0x1EB5F4u;
    // 0x1eb5f4: 0x3c0e0044  lui         $t6, 0x44
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)68 << 16));
    // 0x1eb5f8: 0x3c0c0044  lui         $t4, 0x44
    ctx->pc = 0x1eb5f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)68 << 16));
    // 0x1eb5fc: 0x3c0a0044  lui         $t2, 0x44
    ctx->pc = 0x1eb5fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)68 << 16));
    // 0x1eb600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eb600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb604: 0x25ce3110  addiu       $t6, $t6, 0x3110
    ctx->pc = 0x1eb604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12560));
    // 0x1eb608: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1eb608u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb60c: 0x258c2f10  addiu       $t4, $t4, 0x2F10
    ctx->pc = 0x1eb60cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12048));
    // 0x1eb610: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb610u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb614: 0x254a2ed0  addiu       $t2, $t2, 0x2ED0
    ctx->pc = 0x1eb614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11984));
label_1eb618:
    // 0x1eb618: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1eb618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1eb61c: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1eb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1eb620: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1eb620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb624: 0x3c05477f  lui         $a1, 0x477F
    ctx->pc = 0x1eb624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb628: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1eb628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb62c: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1eb62cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb630: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x1eb630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb634: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x1eb634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eb638: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eb638u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb63c: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x1eb63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1eb640: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1eb640u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb644: 0x24c50058  addiu       $a1, $a2, 0x58
    ctx->pc = 0x1eb644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x1eb648: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eb648u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb64c: 0x0  nop
    ctx->pc = 0x1eb64cu;
    // NOP
    // 0x1eb650: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eb650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eb654: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB654u;
    SET_GPR_U32(ctx, 31, 0x1EB65Cu);
    ctx->pc = 0x1EB658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB654u;
            // 0x1eb658: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB65Cu; }
        if (ctx->pc != 0x1EB65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB65Cu; }
        if (ctx->pc != 0x1EB65Cu) { return; }
    }
    ctx->pc = 0x1EB65Cu;
    // 0x1eb65c: 0x8c580014  lw          $t8, 0x14($v0)
    ctx->pc = 0x1eb65cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eb660: 0x3c05477f  lui         $a1, 0x477F
    ctx->pc = 0x1eb660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18303 << 16));
    // 0x1eb664: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x1eb664u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb668: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x1eb668u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eb66c: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1eb66cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1eb670: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1eb670u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eb674: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1eb674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eb678: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1eb678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1eb67c: 0xd3900  sll         $a3, $t5, 4
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x1eb680: 0x24843110  addiu       $a0, $a0, 0x3110
    ctx->pc = 0x1eb680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12560));
    // 0x1eb684: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1eb684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1eb688: 0x30f2821  addu        $a1, $t8, $t7
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x1eb68c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1eb68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1eb690: 0x25030058  addiu       $v1, $t0, 0x58
    ctx->pc = 0x1eb690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 88));
    // 0x1eb694: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1eb694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1eb698: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1eb698u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb69c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb6a0: 0x0  nop
    ctx->pc = 0x1eb6a0u;
    // NOP
    // 0x1eb6a4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eb6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eb6a8: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EB6A8u;
    SET_GPR_U32(ctx, 31, 0x1EB6B0u);
    ctx->pc = 0x1EB6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6A8u;
            // 0x1eb6ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6B0u; }
        if (ctx->pc != 0x1EB6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6B0u; }
        if (ctx->pc != 0x1EB6B0u) { return; }
    }
    ctx->pc = 0x1EB6B0u;
    // 0x1eb6b0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1eb6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb6b4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eb6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb6b8: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB6B8u;
    SET_GPR_U32(ctx, 31, 0x1EB6C0u);
    ctx->pc = 0x1EB6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6B8u;
            // 0x1eb6bc: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6C0u; }
        if (ctx->pc != 0x1EB6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6C0u; }
        if (ctx->pc != 0x1EB6C0u) { return; }
    }
    ctx->pc = 0x1EB6C0u;
    // 0x1eb6c0: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1eb6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1eb6c4: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x1eb6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb6c8: 0x24632f10  addiu       $v1, $v1, 0x2F10
    ctx->pc = 0x1eb6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12048));
    // 0x1eb6cc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1eb6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1eb6d0: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1eb6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1eb6d4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1eb6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb6d8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1eb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eb6dc: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1eb6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1eb6e0: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EB6E0u;
    SET_GPR_U32(ctx, 31, 0x1EB6E8u);
    ctx->pc = 0x1EB6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6E0u;
            // 0x1eb6e4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6E8u; }
        if (ctx->pc != 0x1EB6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB6E8u; }
        if (ctx->pc != 0x1EB6E8u) { return; }
    }
    ctx->pc = 0x1EB6E8u;
    // 0x1eb6e8: 0x316600ff  andi        $a2, $t3, 0xFF
    ctx->pc = 0x1eb6e8u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)255u)));
    // 0x1eb6ec: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1eb6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6f0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1eb6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb6f8: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EB6F8u;
    SET_GPR_U32(ctx, 31, 0x1EB700u);
    ctx->pc = 0x1EB6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6F8u;
            // 0x1eb6fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB700u; }
        if (ctx->pc != 0x1EB700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB700u; }
        if (ctx->pc != 0x1EB700u) { return; }
    }
    ctx->pc = 0x1EB700u;
    // 0x1eb700: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1eb700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1eb704: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x1eb704u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x1eb708: 0x29230010  slti        $v1, $t1, 0x10
    ctx->pc = 0x1eb708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eb70c: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1eb70cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1eb710: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1eb710u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1eb714: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1eb714u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1eb718: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1EB718u;
    {
        const bool branch_taken_0x1eb718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB718u;
            // 0x1eb71c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb718) {
            ctx->pc = 0x1EB618u;
            goto label_1eb618;
        }
    }
    ctx->pc = 0x1EB720u;
    // 0x1eb720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb724: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB724u;
            // 0x1eb728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB618u: goto label_1eb618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB72Cu;
}
