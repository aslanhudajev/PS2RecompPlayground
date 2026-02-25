#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GeomInit
// Address: 0x11a8e0 - 0x11aa88
void GeomInit_0x11a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GeomInit_0x11a8e0");
#endif

    ctx->pc = 0x11a8e0u;

    // 0x11a8e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11a8e4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11a8e8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11a8ec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11a8ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a8f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11a8f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11a8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8fc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11a8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11a900: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a904: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a908: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a90c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a910: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x11a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x11a914: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x11a914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x11a918: 0xc047132  jal         func_11C4C8
    ctx->pc = 0x11A918u;
    SET_GPR_U32(ctx, 31, 0x11A920u);
    ctx->pc = 0x11A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A918u;
            // 0x11a91c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4C8u;
    if (runtime->hasFunction(0x11C4C8u)) {
        auto targetFn = runtime->lookupFunction(0x11C4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A920u; }
        if (ctx->pc != 0x11A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetDataHead_0x11c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A920u; }
        if (ctx->pc != 0x11A920u) { return; }
    }
    ctx->pc = 0x11A920u;
    // 0x11a920: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11a920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a924: 0x56a00009  bnel        $s5, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A924u;
    {
        const bool branch_taken_0x11a924 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a924) {
            ctx->pc = 0x11A928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A924u;
            // 0x11a928: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A94Cu;
            goto label_11a94c;
        }
    }
    ctx->pc = 0x11A92Cu;
    // 0x11a92c: 0xc046962  jal         func_11A588
    ctx->pc = 0x11A92Cu;
    SET_GPR_U32(ctx, 31, 0x11A934u);
    ctx->pc = 0x11A930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A92Cu;
            // 0x11a930: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A934u; }
        if (ctx->pc != 0x11A934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A934u; }
        if (ctx->pc != 0x11A934u) { return; }
    }
    ctx->pc = 0x11A934u;
    // 0x11a934: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x11A934u;
    {
        const bool branch_taken_0x11a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A934u;
            // 0x11a938: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a934) {
            ctx->pc = 0x11AA60u;
            goto label_11aa60;
        }
    }
    ctx->pc = 0x11A93Cu;
label_11a93c:
    // 0x11a93c: 0xc046962  jal         func_11A588
    ctx->pc = 0x11A93Cu;
    SET_GPR_U32(ctx, 31, 0x11A944u);
    ctx->pc = 0x11A940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A93Cu;
            // 0x11a940: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A944u; }
        if (ctx->pc != 0x11A944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A944u; }
        if (ctx->pc != 0x11A944u) { return; }
    }
    ctx->pc = 0x11A944u;
    // 0x11a944: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11A944u;
    {
        const bool branch_taken_0x11a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A944u;
            // 0x11a948: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a944) {
            ctx->pc = 0x11AA60u;
            goto label_11aa60;
        }
    }
    ctx->pc = 0x11A94Cu;
label_11a94c:
    // 0x11a94c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11A94Cu;
    {
        const bool branch_taken_0x11a94c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A94Cu;
            // 0x11a950: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a94c) {
            ctx->pc = 0x11A984u;
            goto label_11a984;
        }
    }
    ctx->pc = 0x11A954u;
    // 0x11a954: 0x0  nop
    ctx->pc = 0x11a954u;
    // NOP
label_11a958:
    // 0x11a958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a95c: 0xc04713e  jal         func_11C4F8
    ctx->pc = 0x11A95Cu;
    SET_GPR_U32(ctx, 31, 0x11A964u);
    ctx->pc = 0x11A960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A95Cu;
            // 0x11a960: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4F8u;
    if (runtime->hasFunction(0x11C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x11C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A964u; }
        if (ctx->pc != 0x11A964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMaterialHead_0x11c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A964u; }
        if (ctx->pc != 0x11A964u) { return; }
    }
    ctx->pc = 0x11A964u;
    // 0x11a964: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a968: 0x1240fff4  beqz        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x11A968u;
    {
        const bool branch_taken_0x11a968 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A968u;
            // 0x11a96c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a968) {
            ctx->pc = 0x11A93Cu;
            goto label_11a93c;
        }
    }
    ctx->pc = 0x11A970u;
    // 0x11a970: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11a974: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x11a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x11a978: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x11a978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a97c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11A97Cu;
    {
        const bool branch_taken_0x11a97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A97Cu;
            // 0x11a980: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a97c) {
            ctx->pc = 0x11A958u;
            goto label_11a958;
        }
    }
    ctx->pc = 0x11A984u;
label_11a984:
    // 0x11a984: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x11a984u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11a988: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11a988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11a98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a990: 0xc0435bc  jal         func_10D6F0
    ctx->pc = 0x11A990u;
    SET_GPR_U32(ctx, 31, 0x11A998u);
    ctx->pc = 0x11A994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A990u;
            // 0x11a994: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D6F0u;
    if (runtime->hasFunction(0x10D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A998u; }
        if (ctx->pc != 0x11A998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlign_0x10d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A998u; }
        if (ctx->pc != 0x11A998u) { return; }
    }
    ctx->pc = 0x11A998u;
    // 0x11a998: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a99c: 0xaec20024  sw          $v0, 0x24($s6)
    ctx->pc = 0x11a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 2));
    // 0x11a9a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9a4: 0xc0435bc  jal         func_10D6F0
    ctx->pc = 0x11A9A4u;
    SET_GPR_U32(ctx, 31, 0x11A9ACu);
    ctx->pc = 0x11A9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9A4u;
            // 0x11a9a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D6F0u;
    if (runtime->hasFunction(0x10D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9ACu; }
        if (ctx->pc != 0x11A9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlign_0x10d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9ACu; }
        if (ctx->pc != 0x11A9ACu) { return; }
    }
    ctx->pc = 0x11A9ACu;
    // 0x11a9ac: 0xaec20028  sw          $v0, 0x28($s6)
    ctx->pc = 0x11a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 2));
    // 0x11a9b0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x11a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x11a9b4: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11A9B4u;
    {
        const bool branch_taken_0x11a9b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9B4u;
            // 0x11a9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9b4) {
            ctx->pc = 0x11AA5Cu;
            goto label_11aa5c;
        }
    }
    ctx->pc = 0x11A9BCu;
    // 0x11a9bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11a9c0:
    // 0x11a9c0: 0xc04713e  jal         func_11C4F8
    ctx->pc = 0x11A9C0u;
    SET_GPR_U32(ctx, 31, 0x11A9C8u);
    ctx->pc = 0x11A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9C0u;
            // 0x11a9c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4F8u;
    if (runtime->hasFunction(0x11C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x11C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9C8u; }
        if (ctx->pc != 0x11A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMaterialHead_0x11c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9C8u; }
        if (ctx->pc != 0x11A9C8u) { return; }
    }
    ctx->pc = 0x11A9C8u;
    // 0x11a9c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9cc: 0x1240ffdb  beqz        $s2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x11A9CCu;
    {
        const bool branch_taken_0x11a9cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a9cc) {
            ctx->pc = 0x11A93Cu;
            goto label_11a93c;
        }
    }
    ctx->pc = 0x11A9D4u;
    // 0x11a9d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11a9d8: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11A9D8u;
    {
        const bool branch_taken_0x11a9d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9D8u;
            // 0x11a9dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9d8) {
            ctx->pc = 0x11AA44u;
            goto label_11aa44;
        }
    }
    ctx->pc = 0x11A9E0u;
label_11a9e0:
    // 0x11a9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9e4: 0xc047160  jal         func_11C580
    ctx->pc = 0x11A9E4u;
    SET_GPR_U32(ctx, 31, 0x11A9ECu);
    ctx->pc = 0x11A9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9E4u;
            // 0x11a9e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C580u;
    if (runtime->hasFunction(0x11C580u)) {
        auto targetFn = runtime->lookupFunction(0x11C580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9ECu; }
        if (ctx->pc != 0x11A9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryHead_0x11c580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9ECu; }
        if (ctx->pc != 0x11A9ECu) { return; }
    }
    ctx->pc = 0x11A9ECu;
    // 0x11a9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9f0: 0x1200ffd2  beqz        $s0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x11A9F0u;
    {
        const bool branch_taken_0x11a9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9F0u;
            // 0x11a9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9f0) {
            ctx->pc = 0x11A93Cu;
            goto label_11a93c;
        }
    }
    ctx->pc = 0x11A9F8u;
    // 0x11a9f8: 0xc047188  jal         func_11C620
    ctx->pc = 0x11A9F8u;
    SET_GPR_U32(ctx, 31, 0x11AA00u);
    ctx->pc = 0x11A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9F8u;
            // 0x11a9fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C620u;
    if (runtime->hasFunction(0x11C620u)) {
        auto targetFn = runtime->lookupFunction(0x11C620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA00u; }
        if (ctx->pc != 0x11AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryVertex_0x11c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA00u; }
        if (ctx->pc != 0x11AA00u) { return; }
    }
    ctx->pc = 0x11AA00u;
    // 0x11aa00: 0x178880  sll         $s1, $s7, 2
    ctx->pc = 0x11aa00u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x11aa04: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x11aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x11aa08: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11aa0c: 0x1040ffcb  beqz        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x11AA0Cu;
    {
        const bool branch_taken_0x11aa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA0Cu;
            // 0x11aa10: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa0c) {
            ctx->pc = 0x11A93Cu;
            goto label_11a93c;
        }
    }
    ctx->pc = 0x11AA14u;
    // 0x11aa14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa18: 0xc04718c  jal         func_11C630
    ctx->pc = 0x11AA18u;
    SET_GPR_U32(ctx, 31, 0x11AA20u);
    ctx->pc = 0x11AA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA18u;
            // 0x11aa1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C630u;
    if (runtime->hasFunction(0x11C630u)) {
        auto targetFn = runtime->lookupFunction(0x11C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA20u; }
        if (ctx->pc != 0x11AA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryNormal_0x11c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA20u; }
        if (ctx->pc != 0x11AA20u) { return; }
    }
    ctx->pc = 0x11AA20u;
    // 0x11aa20: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x11aa24: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11aa28: 0x1040ffc4  beqz        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x11AA28u;
    {
        const bool branch_taken_0x11aa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA28u;
            // 0x11aa2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa28) {
            ctx->pc = 0x11A93Cu;
            goto label_11a93c;
        }
    }
    ctx->pc = 0x11AA30u;
    // 0x11aa30: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11aa34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11aa34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11aa38: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x11aa38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11aa3c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11AA3Cu;
    {
        const bool branch_taken_0x11aa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA3Cu;
            // 0x11aa40: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa3c) {
            ctx->pc = 0x11A9E0u;
            goto label_11a9e0;
        }
    }
    ctx->pc = 0x11AA44u;
label_11aa44:
    // 0x11aa44: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x11aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x11aa48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11aa48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11aa4c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x11aa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11aa50: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x11AA50u;
    {
        const bool branch_taken_0x11aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA50u;
            // 0x11aa54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa50) {
            ctx->pc = 0x11A9C0u;
            goto label_11a9c0;
        }
    }
    ctx->pc = 0x11AA58u;
    // 0x11aa58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11aa58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11aa5c:
    // 0x11aa5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11aa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11aa60:
    // 0x11aa60: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x11aa60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11aa64: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11aa64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11aa68: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11aa68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11aa6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11aa6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11aa70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11aa70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11aa74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11aa74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aa78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11aa78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa80: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA80u;
            // 0x11aa84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A93Cu: goto label_11a93c;
            case 0x11A94Cu: goto label_11a94c;
            case 0x11A958u: goto label_11a958;
            case 0x11A984u: goto label_11a984;
            case 0x11A9C0u: goto label_11a9c0;
            case 0x11A9E0u: goto label_11a9e0;
            case 0x11AA44u: goto label_11aa44;
            case 0x11AA5Cu: goto label_11aa5c;
            case 0x11AA60u: goto label_11aa60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AA88u;
}
