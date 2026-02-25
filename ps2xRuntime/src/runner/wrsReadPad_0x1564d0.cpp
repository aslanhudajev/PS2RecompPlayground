#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsReadPad
// Address: 0x1564d0 - 0x1566fc
void wrsReadPad_0x1564d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsReadPad_0x1564d0");
#endif

    ctx->pc = 0x1564d0u;

    // 0x1564d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1564d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1564d4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1564d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1564d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1564d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1564dc: 0x244227f0  addiu       $v0, $v0, 0x27F0
    ctx->pc = 0x1564dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10224));
    // 0x1564e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1564e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1564e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1564e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1564e8: 0x3c1e0030  lui         $fp, 0x30
    ctx->pc = 0x1564e8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)48 << 16));
    // 0x1564ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1564ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1564f0: 0x3c170030  lui         $s7, 0x30
    ctx->pc = 0x1564f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)48 << 16));
    // 0x1564f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1564f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1564f8: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x1564f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x1564fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1564fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x156500: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156504: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x156504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x156508: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x156508u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x15650c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156510: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x156510u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x156514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156518: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x156518u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x15651c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156520: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x156520u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x156524: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x156524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x156528: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x156528u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x15652c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x156530: 0x26942a10  addiu       $s4, $s4, 0x2A10
    ctx->pc = 0x156530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 10768));
    // 0x156534: 0x244229f8  addiu       $v0, $v0, 0x29F8
    ctx->pc = 0x156534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10744));
    // 0x156538: 0x26732a00  addiu       $s3, $s3, 0x2A00
    ctx->pc = 0x156538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10752));
    // 0x15653c: 0x26522a08  addiu       $s2, $s2, 0x2A08
    ctx->pc = 0x15653cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10760));
    // 0x156540: 0x263127c0  addiu       $s1, $s1, 0x27C0
    ctx->pc = 0x156540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10176));
    // 0x156544: 0x26d629f0  addiu       $s6, $s6, 0x29F0
    ctx->pc = 0x156544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 10736));
    // 0x156548: 0x26f725f8  addiu       $s7, $s7, 0x25F8
    ctx->pc = 0x156548u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 9720));
    // 0x15654c: 0x27de2600  addiu       $fp, $fp, 0x2600
    ctx->pc = 0x15654cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 9728));
    // 0x156550: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x156550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x156554: 0x26102608  addiu       $s0, $s0, 0x2608
    ctx->pc = 0x156554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9736));
label_156558:
    // 0x156558: 0xc04b360  jal         func_12CD80
    ctx->pc = 0x156558u;
    SET_GPR_U32(ctx, 31, 0x156560u);
    ctx->pc = 0x15655Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156558u;
            // 0x15655c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CD80u;
    if (runtime->hasFunction(0x12CD80u)) {
        auto targetFn = runtime->lookupFunction(0x12CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156560u; }
        if (ctx->pc != 0x156560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetState_0x12cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156560u; }
        if (ctx->pc != 0x156560u) { return; }
    }
    ctx->pc = 0x156560u;
    // 0x156560: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x156560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x156564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156568: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x156568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15656c: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x15656Cu;
    {
        const bool branch_taken_0x15656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15656c) {
            ctx->pc = 0x156668u;
            goto label_156668;
        }
    }
    ctx->pc = 0x156574u;
    // 0x156574: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x156574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156578: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x156578u;
    {
        const bool branch_taken_0x156578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x156578) {
            ctx->pc = 0x1565C0u;
            goto label_1565c0;
        }
    }
    ctx->pc = 0x156580u;
    // 0x156580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156580u;
    {
        const bool branch_taken_0x156580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156580) {
            ctx->pc = 0x156590u;
            goto label_156590;
        }
    }
    ctx->pc = 0x156588u;
    // 0x156588: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x156588u;
    {
        const bool branch_taken_0x156588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156588) {
            ctx->pc = 0x156678u;
            goto label_156678;
        }
    }
    ctx->pc = 0x156590u;
label_156590:
    // 0x156590: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x156590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x156594: 0xc04b32c  jal         func_12CCB0
    ctx->pc = 0x156594u;
    SET_GPR_U32(ctx, 31, 0x15659Cu);
    ctx->pc = 0x156598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156594u;
            // 0x156598: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CCB0u;
    if (runtime->hasFunction(0x12CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x12CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15659Cu; }
        if (ctx->pc != 0x15659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonProfile_0x12ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15659Cu; }
        if (ctx->pc != 0x15659Cu) { return; }
    }
    ctx->pc = 0x15659Cu;
    // 0x15659c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x15659cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1565a0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1565a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1565a4: 0xc04b662  jal         func_12D988
    ctx->pc = 0x1565A4u;
    SET_GPR_U32(ctx, 31, 0x1565ACu);
    ctx->pc = 0x1565A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565A4u;
            // 0x1565a8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D988u;
    if (runtime->hasFunction(0x12D988u)) {
        auto targetFn = runtime->lookupFunction(0x12D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565ACu; }
        if (ctx->pc != 0x1565ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVibGetProfile_0x12d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565ACu; }
        if (ctx->pc != 0x1565ACu) { return; }
    }
    ctx->pc = 0x1565ACu;
    // 0x1565ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1565acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1565b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1565b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1565b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1565b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1565b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1565B8u;
    {
        const bool branch_taken_0x1565b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565B8u;
            // 0x1565bc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565b8) {
            ctx->pc = 0x156678u;
            goto label_156678;
        }
    }
    ctx->pc = 0x1565C0u;
label_1565c0:
    // 0x1565c0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1565c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1565c4: 0xc04b32c  jal         func_12CCB0
    ctx->pc = 0x1565C4u;
    SET_GPR_U32(ctx, 31, 0x1565CCu);
    ctx->pc = 0x1565C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565C4u;
            // 0x1565c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CCB0u;
    if (runtime->hasFunction(0x12CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x12CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565CCu; }
        if (ctx->pc != 0x1565CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonProfile_0x12ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565CCu; }
        if (ctx->pc != 0x1565CCu) { return; }
    }
    ctx->pc = 0x1565CCu;
    // 0x1565cc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1565ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1565d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1565d4: 0xc04b2f6  jal         func_12CBD8
    ctx->pc = 0x1565D4u;
    SET_GPR_U32(ctx, 31, 0x1565DCu);
    ctx->pc = 0x1565D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565D4u;
            // 0x1565d8: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CBD8u;
    if (runtime->hasFunction(0x12CBD8u)) {
        auto targetFn = runtime->lookupFunction(0x12CBD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565DCu; }
        if (ctx->pc != 0x1565DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2Read_0x12cbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565DCu; }
        if (ctx->pc != 0x1565DCu) { return; }
    }
    ctx->pc = 0x1565DCu;
    // 0x1565dc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1565dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1565e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1565e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1565e4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1565e8: 0xc04b662  jal         func_12D988
    ctx->pc = 0x1565E8u;
    SET_GPR_U32(ctx, 31, 0x1565F0u);
    ctx->pc = 0x1565ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565E8u;
            // 0x1565ec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D988u;
    if (runtime->hasFunction(0x12D988u)) {
        auto targetFn = runtime->lookupFunction(0x12D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565F0u; }
        if (ctx->pc != 0x1565F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVibGetProfile_0x12d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565F0u; }
        if (ctx->pc != 0x1565F0u) { return; }
    }
    ctx->pc = 0x1565F0u;
    // 0x1565f0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1565f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1565f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1565f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1565fc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1565fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x156600: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x156600u;
    {
        const bool branch_taken_0x156600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x156600) {
            ctx->pc = 0x156618u;
            goto label_156618;
        }
    }
    ctx->pc = 0x156608u;
    // 0x156608: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x156608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15660c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15660Cu;
    {
        const bool branch_taken_0x15660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15660Cu;
            // 0x156610: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15660c) {
            ctx->pc = 0x156678u;
            goto label_156678;
        }
    }
    ctx->pc = 0x156614u;
    // 0x156614: 0x0  nop
    ctx->pc = 0x156614u;
    // NOP
label_156618:
    // 0x156618: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x156618u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15661c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x156620: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x156620u;
    {
        const bool branch_taken_0x156620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156620) {
            ctx->pc = 0x156658u;
            goto label_156658;
        }
    }
    ctx->pc = 0x156628u;
    // 0x156628: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x156628u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x15662c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15662Cu;
    {
        const bool branch_taken_0x15662c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15662c) {
            ctx->pc = 0x156658u;
            goto label_156658;
        }
    }
    ctx->pc = 0x156634u;
    // 0x156634: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x156634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x156638: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x156638u;
    {
        const bool branch_taken_0x156638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156638) {
            ctx->pc = 0x156658u;
            goto label_156658;
        }
    }
    ctx->pc = 0x156640u;
    // 0x156640: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x156640u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x156644: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x156644u;
    {
        const bool branch_taken_0x156644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x156648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156644u;
            // 0x156648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156644) {
            ctx->pc = 0x156658u;
            goto label_156658;
        }
    }
    ctx->pc = 0x15664Cu;
    // 0x15664c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15664Cu;
    {
        const bool branch_taken_0x15664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15664Cu;
            // 0x156650: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15664c) {
            ctx->pc = 0x156678u;
            goto label_156678;
        }
    }
    ctx->pc = 0x156654u;
    // 0x156654: 0x0  nop
    ctx->pc = 0x156654u;
    // NOP
label_156658:
    // 0x156658: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15665c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15665Cu;
    {
        const bool branch_taken_0x15665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15665Cu;
            // 0x156660: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15665c) {
            ctx->pc = 0x156678u;
            goto label_156678;
        }
    }
    ctx->pc = 0x156664u;
    // 0x156664: 0x0  nop
    ctx->pc = 0x156664u;
    // NOP
label_156668:
    // 0x156668: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x156668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x15666c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15666cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156670: 0xc055a28  jal         func_1568A0
    ctx->pc = 0x156670u;
    SET_GPR_U32(ctx, 31, 0x156678u);
    ctx->pc = 0x156674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156670u;
            // 0x156674: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1568A0u;
    if (runtime->hasFunction(0x1568A0u)) {
        auto targetFn = runtime->lookupFunction(0x1568A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156678u; }
        if (ctx->pc != 0x156678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPadDataClean_0x1568a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156678u; }
        if (ctx->pc != 0x156678u) { return; }
    }
    ctx->pc = 0x156678u;
label_156678:
    // 0x156678: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x156678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15667c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15667cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x156680: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x156680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x156684: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x156684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x156688: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x156688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x15668c: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x15668cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x156690: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x156690u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x156694: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x156698: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x156698u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x15669c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x15669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1566a0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1566a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1566a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1566a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1566a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1566ac: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1566acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1566b0: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1566b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1566b4: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1566B4u;
    {
        const bool branch_taken_0x1566b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1566B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566B4u;
            // 0x1566b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566b4) {
            ctx->pc = 0x156558u;
            goto label_156558;
        }
    }
    ctx->pc = 0x1566BCu;
    // 0x1566bc: 0xc0552b0  jal         func_154AC0
    ctx->pc = 0x1566BCu;
    SET_GPR_U32(ctx, 31, 0x1566C4u);
    ctx->pc = 0x154AC0u;
    if (runtime->hasFunction(0x154AC0u)) {
        auto targetFn = runtime->lookupFunction(0x154AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566C4u; }
        if (ctx->pc != 0x1566C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDecompositionPad_0x154ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566C4u; }
        if (ctx->pc != 0x1566C4u) { return; }
    }
    ctx->pc = 0x1566C4u;
    // 0x1566c4: 0xc05513c  jal         func_1544F0
    ctx->pc = 0x1566C4u;
    SET_GPR_U32(ctx, 31, 0x1566CCu);
    ctx->pc = 0x1544F0u;
    if (runtime->hasFunction(0x1544F0u)) {
        auto targetFn = runtime->lookupFunction(0x1544F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566CCu; }
        if (ctx->pc != 0x1566CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsAdmirationPressPad_0x1544f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1566CCu; }
        if (ctx->pc != 0x1566CCu) { return; }
    }
    ctx->pc = 0x1566CCu;
    // 0x1566cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1566ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1566d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1566d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1566d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1566d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1566d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1566d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1566dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1566dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1566e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1566e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1566e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1566e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1566e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1566e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1566ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1566ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1566f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1566f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1566f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1566F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1566F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1566F4u;
            // 0x1566f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156558u: goto label_156558;
            case 0x156590u: goto label_156590;
            case 0x1565C0u: goto label_1565c0;
            case 0x156618u: goto label_156618;
            case 0x156658u: goto label_156658;
            case 0x156668u: goto label_156668;
            case 0x156678u: goto label_156678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1566FCu;
}
