#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotInit
// Address: 0x154200 - 0x1542f4
void ShotInit_0x154200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotInit_0x154200");
#endif

    ctx->pc = 0x154200u;

    // 0x154200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154204: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x154204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x154208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15420c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15420Cu;
    SET_GPR_U32(ctx, 31, 0x154214u);
    ctx->pc = 0x154210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15420Cu;
            // 0x154210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154214u; }
        if (ctx->pc != 0x154214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154214u; }
        if (ctx->pc != 0x154214u) { return; }
    }
    ctx->pc = 0x154214u;
    // 0x154214: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x154214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x154218: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x154218u;
    SET_GPR_U32(ctx, 31, 0x154220u);
    ctx->pc = 0x15421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154218u;
            // 0x15421c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154220u; }
        if (ctx->pc != 0x154220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154220u; }
        if (ctx->pc != 0x154220u) { return; }
    }
    ctx->pc = 0x154220u;
    // 0x154220: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x154224: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x154224u;
    SET_GPR_U32(ctx, 31, 0x15422Cu);
    ctx->pc = 0x154228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154224u;
            // 0x154228: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15422Cu; }
        if (ctx->pc != 0x15422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15422Cu; }
        if (ctx->pc != 0x15422Cu) { return; }
    }
    ctx->pc = 0x15422Cu;
    // 0x15422c: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x15422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x154230: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x154230u;
    SET_GPR_U32(ctx, 31, 0x154238u);
    ctx->pc = 0x154234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154230u;
            // 0x154234: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154238u; }
        if (ctx->pc != 0x154238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154238u; }
        if (ctx->pc != 0x154238u) { return; }
    }
    ctx->pc = 0x154238u;
    // 0x154238: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x15423c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15423Cu;
    SET_GPR_U32(ctx, 31, 0x154244u);
    ctx->pc = 0x154240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15423Cu;
            // 0x154240: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154244u; }
        if (ctx->pc != 0x154244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154244u; }
        if (ctx->pc != 0x154244u) { return; }
    }
    ctx->pc = 0x154244u;
    // 0x154244: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x154248: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x154248u;
    SET_GPR_U32(ctx, 31, 0x154250u);
    ctx->pc = 0x15424Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154248u;
            // 0x15424c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154250u; }
        if (ctx->pc != 0x154250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154250u; }
        if (ctx->pc != 0x154250u) { return; }
    }
    ctx->pc = 0x154250u;
    // 0x154250: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x154250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x154254: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x154254u;
    SET_GPR_U32(ctx, 31, 0x15425Cu);
    ctx->pc = 0x154258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154254u;
            // 0x154258: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15425Cu; }
        if (ctx->pc != 0x15425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15425Cu; }
        if (ctx->pc != 0x15425Cu) { return; }
    }
    ctx->pc = 0x15425Cu;
    // 0x15425c: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x15425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x154260: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x154260u;
    SET_GPR_U32(ctx, 31, 0x154268u);
    ctx->pc = 0x154264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154260u;
            // 0x154264: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154268u; }
        if (ctx->pc != 0x154268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154268u; }
        if (ctx->pc != 0x154268u) { return; }
    }
    ctx->pc = 0x154268u;
    // 0x154268: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x154268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x15426c: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x15426Cu;
    SET_GPR_U32(ctx, 31, 0x154274u);
    ctx->pc = 0x154270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15426Cu;
            // 0x154270: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154274u; }
        if (ctx->pc != 0x154274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154274u; }
        if (ctx->pc != 0x154274u) { return; }
    }
    ctx->pc = 0x154274u;
    // 0x154274: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x154278: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x154278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15427c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15427cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154280: 0xc05c20c  jal         func_170830
    ctx->pc = 0x154280u;
    SET_GPR_U32(ctx, 31, 0x154288u);
    ctx->pc = 0x154284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154280u;
            // 0x154284: 0x2407000b  addiu       $a3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154288u; }
        if (ctx->pc != 0x154288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154288u; }
        if (ctx->pc != 0x154288u) { return; }
    }
    ctx->pc = 0x154288u;
    // 0x154288: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x154288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15428c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x15428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154290: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x154290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154294: 0xc05c20c  jal         func_170830
    ctx->pc = 0x154294u;
    SET_GPR_U32(ctx, 31, 0x15429Cu);
    ctx->pc = 0x154298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154294u;
            // 0x154298: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15429Cu; }
        if (ctx->pc != 0x15429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15429Cu; }
        if (ctx->pc != 0x15429Cu) { return; }
    }
    ctx->pc = 0x15429Cu;
    // 0x15429c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1542a0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1542a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1542a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1542a8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1542A8u;
    SET_GPR_U32(ctx, 31, 0x1542B0u);
    ctx->pc = 0x1542ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542A8u;
            // 0x1542ac: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542B0u; }
        if (ctx->pc != 0x1542B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542B0u; }
        if (ctx->pc != 0x1542B0u) { return; }
    }
    ctx->pc = 0x1542B0u;
    // 0x1542b0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1542B0u;
    SET_GPR_U32(ctx, 31, 0x1542B8u);
    ctx->pc = 0x1542B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542B0u;
            // 0x1542b4: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542B8u; }
        if (ctx->pc != 0x1542B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542B8u; }
        if (ctx->pc != 0x1542B8u) { return; }
    }
    ctx->pc = 0x1542B8u;
    // 0x1542b8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1542B8u;
    SET_GPR_U32(ctx, 31, 0x1542C0u);
    ctx->pc = 0x1542BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542B8u;
            // 0x1542bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542C0u; }
        if (ctx->pc != 0x1542C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542C0u; }
        if (ctx->pc != 0x1542C0u) { return; }
    }
    ctx->pc = 0x1542C0u;
    // 0x1542c0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1542C0u;
    SET_GPR_U32(ctx, 31, 0x1542C8u);
    ctx->pc = 0x1542C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542C0u;
            // 0x1542c4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542C8u; }
        if (ctx->pc != 0x1542C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542C8u; }
        if (ctx->pc != 0x1542C8u) { return; }
    }
    ctx->pc = 0x1542C8u;
    // 0x1542c8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1542C8u;
    SET_GPR_U32(ctx, 31, 0x1542D0u);
    ctx->pc = 0x1542CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542C8u;
            // 0x1542cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542D0u; }
        if (ctx->pc != 0x1542D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542D0u; }
        if (ctx->pc != 0x1542D0u) { return; }
    }
    ctx->pc = 0x1542D0u;
    // 0x1542d0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1542D0u;
    SET_GPR_U32(ctx, 31, 0x1542D8u);
    ctx->pc = 0x1542D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542D0u;
            // 0x1542d4: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542D8u; }
        if (ctx->pc != 0x1542D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542D8u; }
        if (ctx->pc != 0x1542D8u) { return; }
    }
    ctx->pc = 0x1542D8u;
    // 0x1542d8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1542D8u;
    SET_GPR_U32(ctx, 31, 0x1542E0u);
    ctx->pc = 0x1542DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1542D8u;
            // 0x1542dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542E0u; }
        if (ctx->pc != 0x1542E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1542E0u; }
        if (ctx->pc != 0x1542E0u) { return; }
    }
    ctx->pc = 0x1542E0u;
    // 0x1542e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1542e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1542e4: 0xac202160  sw          $zero, 0x2160($at)
    ctx->pc = 0x1542e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8544), GPR_U32(ctx, 0));
    // 0x1542e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1542e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1542ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1542ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1542F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1542ECu;
            // 0x1542f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1542F4u;
}
