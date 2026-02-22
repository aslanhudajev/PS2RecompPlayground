#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispRefImageField
// Address: 0x1255c8 - 0x125788
void _dispRefImageField_0x1255c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1255c8u;

    // 0x1255c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1255c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1255cc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1255ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1255d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1255d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1255d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1255d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1255d8: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x1255d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x1255dc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1255dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1255e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255e4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1255e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1255e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1255e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1255ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1255f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1255f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1255f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1255f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1255f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1255fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1255fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125600: 0x8ea317bc  lw          $v1, 0x17BC($s5)
    ctx->pc = 0x125600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6076)));
    // 0x125604: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x125604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x125608: 0x8c4419ac  lw          $a0, 0x19AC($v0)
    ctx->pc = 0x125608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x12560c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125610: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125610u;
    {
        const bool branch_taken_0x125610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x125614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125610u;
            // 0x125614: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125610) {
            ctx->pc = 0x125628u;
            goto label_125628;
        }
    }
    ctx->pc = 0x125618u;
    // 0x125618: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12561c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x12561cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x125620u;
    {
        const bool branch_taken_0x125620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125620u;
            // 0x125624: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125620) {
            ctx->pc = 0x125630u;
            goto label_125630;
        }
    }
    ctx->pc = 0x125628u;
label_125628:
    // 0x125628: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x125628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12562c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x12562cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125630:
    // 0x125630: 0x8ea617bc  lw          $a2, 0x17BC($s5)
    ctx->pc = 0x125630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6076)));
    // 0x125634: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125638: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x125638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12563c: 0x24c70020  addiu       $a3, $a2, 0x20
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x125640: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x125640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x125644: 0xc0494c6  jal         func_125318
    ctx->pc = 0x125644u;
    SET_GPR_U32(ctx, 31, 0x12564Cu);
    ctx->pc = 0x125648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125644u;
            // 0x125648: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125318u;
    if (runtime->hasFunction(0x125318u)) {
        auto targetFn = runtime->lookupFunction(0x125318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12564Cu; }
        if (ctx->pc != 0x12564Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x125318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12564Cu; }
        if (ctx->pc != 0x12564Cu) { return; }
    }
    ctx->pc = 0x12564Cu;
    // 0x12564c: 0x8ea617bc  lw          $a2, 0x17BC($s5)
    ctx->pc = 0x12564cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6076)));
    // 0x125650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x125650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125654: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x125654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x125658: 0x24c70038  addiu       $a3, $a2, 0x38
    ctx->pc = 0x125658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
    // 0x12565c: 0x24c50028  addiu       $a1, $a2, 0x28
    ctx->pc = 0x12565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x125660: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x125660u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x125664: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x125664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x125668: 0xc0494c6  jal         func_125318
    ctx->pc = 0x125668u;
    SET_GPR_U32(ctx, 31, 0x125670u);
    ctx->pc = 0x12566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125668u;
            // 0x12566c: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125318u;
    if (runtime->hasFunction(0x125318u)) {
        auto targetFn = runtime->lookupFunction(0x125318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125670u; }
        if (ctx->pc != 0x125670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x125318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125670u; }
        if (ctx->pc != 0x125670u) { return; }
    }
    ctx->pc = 0x125670u;
    // 0x125670: 0x8ea617bc  lw          $a2, 0x17BC($s5)
    ctx->pc = 0x125670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6076)));
    // 0x125674: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x125674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12567c: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x125680: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x125680u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x125684: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x125684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x125688: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x125688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x12568c: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x12568cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x125690: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x125690u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x125694: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x125694u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x125698: 0xae2500cc  sw          $a1, 0xCC($s1)
    ctx->pc = 0x125698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 5));
    // 0x12569c: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x12569cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x1256a0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1256a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x1256a4: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1256a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1256a8: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x1256a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x1256ac: 0xae2500d0  sw          $a1, 0xD0($s1)
    ctx->pc = 0x1256acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
    // 0x1256b0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1256b4: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x1256b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x1256b8: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x1256b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1256bc: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x1256bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x1256c0: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x1256c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1256c4: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x1256c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x1256c8: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x1256c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1256cc: 0xc049414  jal         func_125050
    ctx->pc = 0x1256CCu;
    SET_GPR_U32(ctx, 31, 0x1256D4u);
    ctx->pc = 0x1256D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1256CCu;
            // 0x1256d0: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125050u;
    if (runtime->hasFunction(0x125050u)) {
        auto targetFn = runtime->lookupFunction(0x125050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256D4u; }
        if (ctx->pc != 0x1256D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x125050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256D4u; }
        if (ctx->pc != 0x1256D4u) { return; }
    }
    ctx->pc = 0x1256D4u;
    // 0x1256d4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1256D4u;
    {
        const bool branch_taken_0x1256d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256D4u;
            // 0x1256d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256d4) {
            ctx->pc = 0x12575Cu;
            goto label_12575c;
        }
    }
    ctx->pc = 0x1256DCu;
    // 0x1256dc: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1256dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1256e0: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1256E0u;
    {
        const bool branch_taken_0x1256e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1256E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256E0u;
            // 0x1256e4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256e0) {
            ctx->pc = 0x125760u;
            goto label_125760;
        }
    }
    ctx->pc = 0x1256E8u;
    // 0x1256e8: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x1256e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x1256ec: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1256ECu;
    {
        const bool branch_taken_0x1256ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1256F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256ECu;
            // 0x1256f0: 0xdfb70070  ld          $s7, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256ec) {
            ctx->pc = 0x125764u;
            goto label_125764;
        }
    }
    ctx->pc = 0x1256F4u;
    // 0x1256f4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1256f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1256f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1256f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1256fc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1256fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x125700: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x125704: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x125704u;
    {
        const bool branch_taken_0x125704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125704) {
            ctx->pc = 0x12571Cu;
            goto label_12571c;
        }
    }
    ctx->pc = 0x12570Cu;
    // 0x12570c: 0xc049714  jal         func_125C50
    ctx->pc = 0x12570Cu;
    SET_GPR_U32(ctx, 31, 0x125714u);
    ctx->pc = 0x125710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12570Cu;
            // 0x125710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125C50u;
    if (runtime->hasFunction(0x125C50u)) {
        auto targetFn = runtime->lookupFunction(0x125C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125714u; }
        if (ctx->pc != 0x125714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x125c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125714u; }
        if (ctx->pc != 0x125714u) { return; }
    }
    ctx->pc = 0x125714u;
    // 0x125714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x125714u;
    {
        const bool branch_taken_0x125714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125714u;
            // 0x125718: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125714) {
            ctx->pc = 0x125728u;
            goto label_125728;
        }
    }
    ctx->pc = 0x12571Cu;
label_12571c:
    // 0x12571c: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x12571Cu;
    SET_GPR_U32(ctx, 31, 0x125724u);
    ctx->pc = 0x125720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12571Cu;
            // 0x125720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125724u; }
        if (ctx->pc != 0x125724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125724u; }
        if (ctx->pc != 0x125724u) { return; }
    }
    ctx->pc = 0x125724u;
    // 0x125724: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x125724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_125728:
    // 0x125728: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x125728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12572c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x12572cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x125730: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x125730u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125734: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x125734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x125738: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x125738u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12573c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x12573cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125740: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x125740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125744: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x125744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125748: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x125748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12574c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12574cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125754: 0x80494b8  j           func_1252E0
    ctx->pc = 0x125754u;
    ctx->pc = 0x125758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125754u;
            // 0x125758: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1252E0u;
    if (runtime->hasFunction(0x1252E0u)) {
        auto targetFn = runtime->lookupFunction(0x1252E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _markOutput_0x1252e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12575Cu;
label_12575c:
    // 0x12575c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_125760:
    // 0x125760: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x125760u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_125764:
    // 0x125764: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x125764u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125768: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x125768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12576c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12576cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125770: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x125770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125774: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x125774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125778: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x125778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12577c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12577cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125780: 0x3e00008  jr          $ra
    ctx->pc = 0x125780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125780u;
            // 0x125784: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125628u: goto label_125628;
            case 0x125630u: goto label_125630;
            case 0x12571Cu: goto label_12571c;
            case 0x125728u: goto label_125728;
            case 0x12575Cu: goto label_12575c;
            case 0x125760u: goto label_125760;
            case 0x125764u: goto label_125764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125788u;
}
