#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: set_skin_id
// Address: 0x118808 - 0x1189d8
void set_skin_id_0x118808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("set_skin_id_0x118808");
#endif

    ctx->pc = 0x118808u;

    // 0x118808: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11880c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x118810: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x118810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x118814: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x118814u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118818: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11881c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11881cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118820: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x118820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x118824: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x118824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x118828: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x118828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11882c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x118830: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x118830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x118834: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x118834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x118838: 0xc043530  jal         func_10D4C0
    ctx->pc = 0x118838u;
    SET_GPR_U32(ctx, 31, 0x118840u);
    ctx->pc = 0x11883Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118838u;
            // 0x11883c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4C0u;
    if (runtime->hasFunction(0x10D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118840u; }
        if (ctx->pc != 0x118840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlloc_0x10d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118840u; }
        if (ctx->pc != 0x118840u) { return; }
    }
    ctx->pc = 0x118840u;
    // 0x118840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118844: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x118844u;
    {
        const bool branch_taken_0x118844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118844u;
            // 0x118848: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118844) {
            ctx->pc = 0x11885Cu;
            goto label_11885c;
        }
    }
    ctx->pc = 0x11884Cu;
    // 0x11884c: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x11884Cu;
    SET_GPR_U32(ctx, 31, 0x118854u);
    ctx->pc = 0x118850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11884Cu;
            // 0x118850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118854u; }
        if (ctx->pc != 0x118854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118854u; }
        if (ctx->pc != 0x118854u) { return; }
    }
    ctx->pc = 0x118854u;
    // 0x118854: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x118854u;
    {
        const bool branch_taken_0x118854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118854u;
            // 0x118858: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118854) {
            ctx->pc = 0x1189B8u;
            goto label_1189b8;
        }
    }
    ctx->pc = 0x11885Cu;
label_11885c:
    // 0x11885c: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x11885cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x118860: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x118860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x118864: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x118864u;
    {
        const bool branch_taken_0x118864 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x118868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118864u;
            // 0x118868: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118864) {
            ctx->pc = 0x1188A4u;
            goto label_1188a4;
        }
    }
    ctx->pc = 0x11886Cu;
    // 0x11886c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11886cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118870: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x118870u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x118874: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x118874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118878: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x118878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11887c: 0x0  nop
    ctx->pc = 0x11887cu;
    // NOP
label_118880:
    // 0x118880: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x118880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x118884: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x118884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x118888: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x118888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x11888c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x11888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x118890: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x118890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118894: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118894u;
    {
        const bool branch_taken_0x118894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118894u;
            // 0x118898: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118894) {
            ctx->pc = 0x118880u;
            goto label_118880;
        }
    }
    ctx->pc = 0x11889Cu;
    // 0x11889c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11889Cu;
    {
        const bool branch_taken_0x11889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11889Cu;
            // 0x1188a0: 0xdce5e520  ld          $a1, -0x1AE0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294960416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11889c) {
            ctx->pc = 0x1188ACu;
            goto label_1188ac;
        }
    }
    ctx->pc = 0x1188A4u;
label_1188a4:
    // 0x1188a4: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1188a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1188a8: 0xdce5e520  ld          $a1, -0x1AE0($a3)
    ctx->pc = 0x1188a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294960416)));
label_1188ac:
    // 0x1188ac: 0xc04726c  jal         func_11C9B0
    ctx->pc = 0x1188ACu;
    SET_GPR_U32(ctx, 31, 0x1188B4u);
    ctx->pc = 0x1188B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1188ACu;
            // 0x1188b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C9B0u;
    if (runtime->hasFunction(0x11C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x11C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188B4u; }
        if (ctx->pc != 0x1188B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugSkinGetHead_0x11c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188B4u; }
        if (ctx->pc != 0x1188B4u) { return; }
    }
    ctx->pc = 0x1188B4u;
    // 0x1188b4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1188B4u;
    {
        const bool branch_taken_0x1188b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188B4u;
            // 0x1188b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188b4) {
            ctx->pc = 0x1189B0u;
            goto label_1189b0;
        }
    }
    ctx->pc = 0x1188BCu;
    // 0x1188bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1188bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1188c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1188c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188c4: 0xc04726c  jal         func_11C9B0
    ctx->pc = 0x1188C4u;
    SET_GPR_U32(ctx, 31, 0x1188CCu);
    ctx->pc = 0x1188C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1188C4u;
            // 0x1188c8: 0xdc45e528  ld          $a1, -0x1AD8($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960424)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C9B0u;
    if (runtime->hasFunction(0x11C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x11C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188CCu; }
        if (ctx->pc != 0x1188CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugSkinGetHead_0x11c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188CCu; }
        if (ctx->pc != 0x1188CCu) { return; }
    }
    ctx->pc = 0x1188CCu;
    // 0x1188cc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1188CCu;
    {
        const bool branch_taken_0x1188cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188CCu;
            // 0x1188d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188cc) {
            ctx->pc = 0x1189B0u;
            goto label_1189b0;
        }
    }
    ctx->pc = 0x1188D4u;
    // 0x1188d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1188d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188d8: 0xc047280  jal         func_11CA00
    ctx->pc = 0x1188D8u;
    SET_GPR_U32(ctx, 31, 0x1188E0u);
    ctx->pc = 0x1188DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1188D8u;
            // 0x1188dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CA00u;
    if (runtime->hasFunction(0x11CA00u)) {
        auto targetFn = runtime->lookupFunction(0x11CA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188E0u; }
        if (ctx->pc != 0x1188E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugSkinGetLW_0x11ca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188E0u; }
        if (ctx->pc != 0x1188E0u) { return; }
    }
    ctx->pc = 0x1188E0u;
    // 0x1188e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1188e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1188e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1188e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188e8: 0xc047284  jal         func_11CA10
    ctx->pc = 0x1188E8u;
    SET_GPR_U32(ctx, 31, 0x1188F0u);
    ctx->pc = 0x1188ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1188E8u;
            // 0x1188ec: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CA10u;
    if (runtime->hasFunction(0x11CA10u)) {
        auto targetFn = runtime->lookupFunction(0x11CA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188F0u; }
        if (ctx->pc != 0x1188F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugSkinGetBW_0x11ca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1188F0u; }
        if (ctx->pc != 0x1188F0u) { return; }
    }
    ctx->pc = 0x1188F0u;
    // 0x1188f0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1188F0u;
    {
        const bool branch_taken_0x1188f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188F0u;
            // 0x1188f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188f0) {
            ctx->pc = 0x118900u;
            goto label_118900;
        }
    }
    ctx->pc = 0x1188F8u;
    // 0x1188f8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1188F8u;
    {
        const bool branch_taken_0x1188f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1188FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188F8u;
            // 0x1188fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188f8) {
            ctx->pc = 0x118910u;
            goto label_118910;
        }
    }
    ctx->pc = 0x118900u;
label_118900:
    // 0x118900: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x118900u;
    SET_GPR_U32(ctx, 31, 0x118908u);
    ctx->pc = 0x118904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118900u;
            // 0x118904: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118908u; }
        if (ctx->pc != 0x118908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118908u; }
        if (ctx->pc != 0x118908u) { return; }
    }
    ctx->pc = 0x118908u;
    // 0x118908: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x118908u;
    {
        const bool branch_taken_0x118908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118908u;
            // 0x11890c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118908) {
            ctx->pc = 0x1189B8u;
            goto label_1189b8;
        }
    }
    ctx->pc = 0x118910u;
label_118910:
    // 0x118910: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x118910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118914: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x118914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x118918: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x118918u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11891c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x11891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x118920: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x118920u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x118924: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x118924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x118928: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x118928u;
    {
        const bool branch_taken_0x118928 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118928u;
            // 0x11892c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118928) {
            ctx->pc = 0x1189B0u;
            goto label_1189b0;
        }
    }
    ctx->pc = 0x118930u;
    // 0x118930: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118934: 0x0  nop
    ctx->pc = 0x118934u;
    // NOP
label_118938:
    // 0x118938: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x118938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11893c: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x11893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x118940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x118940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x118944: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x118944u;
    SET_GPR_U32(ctx, 31, 0x11894Cu);
    ctx->pc = 0x118948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118944u;
            // 0x118948: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11894Cu; }
        if (ctx->pc != 0x11894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11894Cu; }
        if (ctx->pc != 0x11894Cu) { return; }
    }
    ctx->pc = 0x11894Cu;
    // 0x11894c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11894Cu;
    {
        const bool branch_taken_0x11894c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11894Cu;
            // 0x118950: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11894c) {
            ctx->pc = 0x1189B8u;
            goto label_1189b8;
        }
    }
    ctx->pc = 0x118954u;
    // 0x118954: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x118954u;
    SET_GPR_U32(ctx, 31, 0x11895Cu);
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11895Cu; }
        if (ctx->pc != 0x11895Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11895Cu; }
        if (ctx->pc != 0x11895Cu) { return; }
    }
    ctx->pc = 0x11895Cu;
    // 0x11895c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11895Cu;
    {
        const bool branch_taken_0x11895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11895Cu;
            // 0x118960: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11895c) {
            ctx->pc = 0x1189B4u;
            goto label_1189b4;
        }
    }
    ctx->pc = 0x118964u;
    // 0x118964: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x118964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118968: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x118968u;
    SET_GPR_U32(ctx, 31, 0x118970u);
    ctx->pc = 0x11896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118968u;
            // 0x11896c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118970u; }
        if (ctx->pc != 0x118970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118970u; }
        if (ctx->pc != 0x118970u) { return; }
    }
    ctx->pc = 0x118970u;
    // 0x118970: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x118970u;
    {
        const bool branch_taken_0x118970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118970u;
            // 0x118974: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118970) {
            ctx->pc = 0x1189B8u;
            goto label_1189b8;
        }
    }
    ctx->pc = 0x118978u;
    // 0x118978: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x118978u;
    SET_GPR_U32(ctx, 31, 0x118980u);
    ctx->pc = 0x11897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118978u;
            // 0x11897c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118980u; }
        if (ctx->pc != 0x118980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118980u; }
        if (ctx->pc != 0x118980u) { return; }
    }
    ctx->pc = 0x118980u;
    // 0x118980: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x118980u;
    {
        const bool branch_taken_0x118980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118980u;
            // 0x118984: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118980) {
            ctx->pc = 0x1189B4u;
            goto label_1189b4;
        }
    }
    ctx->pc = 0x118988u;
    // 0x118988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x118988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11898c: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x11898cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x118990: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x118990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x118994: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x118994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x118998: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x118998u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11899c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x11899cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1189a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1189a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1189a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1189a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1189a8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1189A8u;
    {
        const bool branch_taken_0x1189a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1189ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1189A8u;
            // 0x1189ac: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189a8) {
            ctx->pc = 0x118938u;
            goto label_118938;
        }
    }
    ctx->pc = 0x1189B0u;
label_1189b0:
    // 0x1189b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1189b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1189b4:
    // 0x1189b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1189b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1189b8:
    // 0x1189b8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1189b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1189bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1189bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1189c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1189c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1189c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1189c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1189c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1189c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1189cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1189ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1189d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1189D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1189D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1189D0u;
            // 0x1189d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11885Cu: goto label_11885c;
            case 0x118880u: goto label_118880;
            case 0x1188A4u: goto label_1188a4;
            case 0x1188ACu: goto label_1188ac;
            case 0x118900u: goto label_118900;
            case 0x118910u: goto label_118910;
            case 0x118938u: goto label_118938;
            case 0x1189B0u: goto label_1189b0;
            case 0x1189B4u: goto label_1189b4;
            case 0x1189B8u: goto label_1189b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1189D8u;
}
