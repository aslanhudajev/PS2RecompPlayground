#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitPad
// Address: 0x156700 - 0x15689c
void wrsInitPad_0x156700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitPad_0x156700");
#endif

    ctx->pc = 0x156700u;

    // 0x156700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x156700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x156704: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x156704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x156708: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x156708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15670c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x156710: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x156710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x156714: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x156714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x156718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x156718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15671c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x156720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x156724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156728: 0xc041576  jal         func_1055D8
    ctx->pc = 0x156728u;
    SET_GPR_U32(ctx, 31, 0x156730u);
    ctx->pc = 0x15672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156728u;
            // 0x15672c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1055D8u;
    if (runtime->hasFunction(0x1055D8u)) {
        auto targetFn = runtime->lookupFunction(0x1055D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156730u; }
        if (ctx->pc != 0x156730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDbcInit_0x1055d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156730u; }
        if (ctx->pc != 0x156730u) { return; }
    }
    ctx->pc = 0x156730u;
    // 0x156730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156734: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x156734u;
    {
        const bool branch_taken_0x156734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x156738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156734u;
            // 0x156738: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156734) {
            ctx->pc = 0x156750u;
            goto label_156750;
        }
    }
    ctx->pc = 0x15673Cu;
    // 0x15673c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x15673cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x156740: 0x24840dc0  addiu       $a0, $a0, 0xDC0
    ctx->pc = 0x156740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3520));
    // 0x156744: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x156748: 0xc059e98  jal         func_167A60
    ctx->pc = 0x156748u;
    SET_GPR_U32(ctx, 31, 0x156750u);
    ctx->pc = 0x15674Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156748u;
            // 0x15674c: 0x24c60dd0  addiu       $a2, $a2, 0xDD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156750u; }
        if (ctx->pc != 0x156750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156750u; }
        if (ctx->pc != 0x156750u) { return; }
    }
    ctx->pc = 0x156750u;
label_156750:
    // 0x156750: 0xc04b274  jal         func_12C9D0
    ctx->pc = 0x156750u;
    SET_GPR_U32(ctx, 31, 0x156758u);
    ctx->pc = 0x156754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156750u;
            // 0x156754: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C9D0u;
    if (runtime->hasFunction(0x12C9D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156758u; }
        if (ctx->pc != 0x156758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2Init_0x12c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156758u; }
        if (ctx->pc != 0x156758u) { return; }
    }
    ctx->pc = 0x156758u;
    // 0x156758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15675c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15675Cu;
    {
        const bool branch_taken_0x15675c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x156760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15675Cu;
            // 0x156760: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15675c) {
            ctx->pc = 0x156778u;
            goto label_156778;
        }
    }
    ctx->pc = 0x156764u;
    // 0x156764: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x156764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x156768: 0x24840dc0  addiu       $a0, $a0, 0xDC0
    ctx->pc = 0x156768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3520));
    // 0x15676c: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x15676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x156770: 0xc059e98  jal         func_167A60
    ctx->pc = 0x156770u;
    SET_GPR_U32(ctx, 31, 0x156778u);
    ctx->pc = 0x156774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156770u;
            // 0x156774: 0x24c60e00  addiu       $a2, $a2, 0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156778u; }
        if (ctx->pc != 0x156778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156778u; }
        if (ctx->pc != 0x156778u) { return; }
    }
    ctx->pc = 0x156778u;
label_156778:
    // 0x156778: 0x3c170030  lui         $s7, 0x30
    ctx->pc = 0x156778u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)48 << 16));
    // 0x15677c: 0x3c1e0030  lui         $fp, 0x30
    ctx->pc = 0x15677cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)48 << 16));
    // 0x156780: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x156780u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x156784: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x156784u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x156788: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x15678c: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x15678cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x156790: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x156790u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x156794: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x156794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x156798: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x156798u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15679c: 0x26f72610  addiu       $s7, $s7, 0x2610
    ctx->pc = 0x15679cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 9744));
    // 0x1567a0: 0x27de2a40  addiu       $fp, $fp, 0x2A40
    ctx->pc = 0x1567a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 10816));
    // 0x1567a4: 0x26b52a10  addiu       $s5, $s5, 0x2A10
    ctx->pc = 0x1567a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 10768));
    // 0x1567a8: 0x26942a08  addiu       $s4, $s4, 0x2A08
    ctx->pc = 0x1567a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 10760));
    // 0x1567ac: 0x26732720  addiu       $s3, $s3, 0x2720
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10016));
    // 0x1567b0: 0x26522680  addiu       $s2, $s2, 0x2680
    ctx->pc = 0x1567b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9856));
    // 0x1567b4: 0x26312650  addiu       $s1, $s1, 0x2650
    ctx->pc = 0x1567b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9808));
    // 0x1567b8: 0x26102608  addiu       $s0, $s0, 0x2608
    ctx->pc = 0x1567b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9736));
    // 0x1567bc: 0x0  nop
    ctx->pc = 0x1567bcu;
    // NOP
label_1567c0:
    // 0x1567c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1567c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1567c4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1567c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1567c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1567c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567cc: 0x16102b  sltu        $v0, $zero, $s6
    ctx->pc = 0x1567ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1567d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1567d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567d4: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x1567d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x1567d8: 0xc04b29e  jal         func_12CA78
    ctx->pc = 0x1567D8u;
    SET_GPR_U32(ctx, 31, 0x1567E0u);
    ctx->pc = 0x1567DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567D8u;
            // 0x1567dc: 0xaee00008  sw          $zero, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CA78u;
    if (runtime->hasFunction(0x12CA78u)) {
        auto targetFn = runtime->lookupFunction(0x12CA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567E0u; }
        if (ctx->pc != 0x1567E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2CreateSocket_0x12ca78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1567E0u; }
        if (ctx->pc != 0x1567E0u) { return; }
    }
    ctx->pc = 0x1567E0u;
    // 0x1567e0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1567e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1567e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1567e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1567e8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1567E8u;
    {
        const bool branch_taken_0x1567e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1567ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1567E8u;
            // 0x1567ec: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567e8) {
            ctx->pc = 0x156808u;
            goto label_156808;
        }
    }
    ctx->pc = 0x1567F0u;
    // 0x1567f0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1567f4: 0x24840dc0  addiu       $a0, $a0, 0xDC0
    ctx->pc = 0x1567f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3520));
    // 0x1567f8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1567f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1567fc: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1567FCu;
    SET_GPR_U32(ctx, 31, 0x156804u);
    ctx->pc = 0x156800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1567FCu;
            // 0x156800: 0x24c60e30  addiu       $a2, $a2, 0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156804u; }
        if (ctx->pc != 0x156804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156804u; }
        if (ctx->pc != 0x156804u) { return; }
    }
    ctx->pc = 0x156804u;
    // 0x156804: 0x0  nop
    ctx->pc = 0x156804u;
    // NOP
label_156808:
    // 0x156808: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x156808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15680c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156810: 0x24a50e48  addiu       $a1, $a1, 0xE48
    ctx->pc = 0x156810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3656));
    // 0x156814: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x156814u;
    SET_GPR_U32(ctx, 31, 0x15681Cu);
    ctx->pc = 0x156818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156814u;
            // 0x156818: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15681Cu; }
        if (ctx->pc != 0x15681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15681Cu; }
        if (ctx->pc != 0x15681Cu) { return; }
    }
    ctx->pc = 0x15681Cu;
    // 0x15681c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x15681cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x156820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156824: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x156824u;
    SET_GPR_U32(ctx, 31, 0x15682Cu);
    ctx->pc = 0x156828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156824u;
            // 0x156828: 0x24a50e48  addiu       $a1, $a1, 0xE48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15682Cu; }
        if (ctx->pc != 0x15682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15682Cu; }
        if (ctx->pc != 0x15682Cu) { return; }
    }
    ctx->pc = 0x15682Cu;
    // 0x15682c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x15682cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x156830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156834: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x156834u;
    SET_GPR_U32(ctx, 31, 0x15683Cu);
    ctx->pc = 0x156838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156834u;
            // 0x156838: 0x24a50e48  addiu       $a1, $a1, 0xE48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15683Cu; }
        if (ctx->pc != 0x15683Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15683Cu; }
        if (ctx->pc != 0x15683Cu) { return; }
    }
    ctx->pc = 0x15683Cu;
    // 0x15683c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x15683cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x156840: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x156840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x156844: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x156844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x156848: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x156848u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x15684c: 0x27de0100  addiu       $fp, $fp, 0x100
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 256));
    // 0x156850: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x156850u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x156854: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x156854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x156858: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x156858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x15685c: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x15685cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x156860: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x156860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x156864: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x156864u;
    {
        const bool branch_taken_0x156864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156864u;
            // 0x156868: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156864) {
            ctx->pc = 0x1567C0u;
            goto label_1567c0;
        }
    }
    ctx->pc = 0x15686Cu;
    // 0x15686c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x156870: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x156870u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x156874: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x156874u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x156878: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x156878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15687c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15687cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x156880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x156880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x156884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15688c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15688cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156894: 0x3e00008  jr          $ra
    ctx->pc = 0x156894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156894u;
            // 0x156898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156750u: goto label_156750;
            case 0x156778u: goto label_156778;
            case 0x1567C0u: goto label_1567c0;
            case 0x156808u: goto label_156808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15689Cu;
}
