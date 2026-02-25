#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _request_end
// Address: 0x1317a8 - 0x13185c
void _request_end_0x1317a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_request_end_0x1317a8");
#endif

    ctx->pc = 0x1317a8u;

label_1317a8:
    // 0x1317a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1317a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1317ac:
    // 0x1317ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1317acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1317b0:
    // 0x1317b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1317b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1317b4:
    // 0x1317b4: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1317b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)10u)));
label_1317b8:
    // 0x1317b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1317b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1317bc:
    // 0x1317bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1317bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1317c0:
    // 0x1317c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1317c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1317c4:
    // 0x1317c4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1317c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1317c8:
    // 0x1317c8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1317cc:
    if (ctx->pc == 0x1317CCu) {
        ctx->pc = 0x1317CCu;
            // 0x1317cc: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x1317D0u;
        goto label_1317d0;
    }
    ctx->pc = 0x1317C8u;
    {
        const bool branch_taken_0x1317c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1317CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1317C8u;
            // 0x1317cc: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317c8) {
            ctx->pc = 0x1317F0u;
            goto label_1317f0;
        }
    }
    ctx->pc = 0x1317D0u;
label_1317d0:
    // 0x1317d0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1317d4:
    if (ctx->pc == 0x1317D4u) {
        ctx->pc = 0x1317D4u;
            // 0x1317d4: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x1317D8u;
        goto label_1317d8;
    }
    ctx->pc = 0x1317D0u;
    {
        const bool branch_taken_0x1317d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1317d0) {
            ctx->pc = 0x1317D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1317D0u;
            // 0x1317d4: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131828u;
            goto label_131828;
        }
    }
    ctx->pc = 0x1317D8u;
label_1317d8:
    // 0x1317d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1317d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1317dc:
    // 0x1317dc: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1317dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9u)));
label_1317e0:
    // 0x1317e0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_1317e4:
    if (ctx->pc == 0x1317E4u) {
        ctx->pc = 0x1317E4u;
            // 0x1317e4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x1317E8u;
        goto label_1317e8;
    }
    ctx->pc = 0x1317E0u;
    {
        const bool branch_taken_0x1317e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1317e0) {
            ctx->pc = 0x1317E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1317E0u;
            // 0x1317e4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131810u;
            goto label_131810;
        }
    }
    ctx->pc = 0x1317E8u;
label_1317e8:
    // 0x1317e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1317ec:
    if (ctx->pc == 0x1317ECu) {
        ctx->pc = 0x1317ECu;
            // 0x1317ec: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x1317F0u;
        goto label_1317f0;
    }
    ctx->pc = 0x1317E8u;
    {
        const bool branch_taken_0x1317e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1317E8u;
            // 0x1317ec: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317e8) {
            ctx->pc = 0x131828u;
            goto label_131828;
        }
    }
    ctx->pc = 0x1317F0u;
label_1317f0:
    // 0x1317f0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1317f4:
    // 0x1317f4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1317f8:
    // 0x1317f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1317fc:
    if (ctx->pc == 0x1317FCu) {
        ctx->pc = 0x1317FCu;
            // 0x1317fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x131800u;
        goto label_131800;
    }
    ctx->pc = 0x1317F8u;
    {
        const bool branch_taken_0x1317f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317f8) {
            ctx->pc = 0x1317FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1317F8u;
            // 0x1317fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13182Cu;
            goto label_13182c;
        }
    }
    ctx->pc = 0x131800u;
label_131800:
    // 0x131800: 0x40f809  jalr        $v0
label_131804:
    if (ctx->pc == 0x131804u) {
        ctx->pc = 0x131804u;
            // 0x131804: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x131808u;
        goto label_131808;
    }
    ctx->pc = 0x131800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131808u);
        ctx->pc = 0x131804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131800u;
            // 0x131804: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1317A8u: goto label_1317a8;
            case 0x1317ACu: goto label_1317ac;
            case 0x1317B0u: goto label_1317b0;
            case 0x1317B4u: goto label_1317b4;
            case 0x1317B8u: goto label_1317b8;
            case 0x1317BCu: goto label_1317bc;
            case 0x1317C0u: goto label_1317c0;
            case 0x1317C4u: goto label_1317c4;
            case 0x1317C8u: goto label_1317c8;
            case 0x1317CCu: goto label_1317cc;
            case 0x1317D0u: goto label_1317d0;
            case 0x1317D4u: goto label_1317d4;
            case 0x1317D8u: goto label_1317d8;
            case 0x1317DCu: goto label_1317dc;
            case 0x1317E0u: goto label_1317e0;
            case 0x1317E4u: goto label_1317e4;
            case 0x1317E8u: goto label_1317e8;
            case 0x1317ECu: goto label_1317ec;
            case 0x1317F0u: goto label_1317f0;
            case 0x1317F4u: goto label_1317f4;
            case 0x1317F8u: goto label_1317f8;
            case 0x1317FCu: goto label_1317fc;
            case 0x131800u: goto label_131800;
            case 0x131804u: goto label_131804;
            case 0x131808u: goto label_131808;
            case 0x13180Cu: goto label_13180c;
            case 0x131810u: goto label_131810;
            case 0x131814u: goto label_131814;
            case 0x131818u: goto label_131818;
            case 0x13181Cu: goto label_13181c;
            case 0x131820u: goto label_131820;
            case 0x131824u: goto label_131824;
            case 0x131828u: goto label_131828;
            case 0x13182Cu: goto label_13182c;
            case 0x131830u: goto label_131830;
            case 0x131834u: goto label_131834;
            case 0x131838u: goto label_131838;
            case 0x13183Cu: goto label_13183c;
            case 0x131840u: goto label_131840;
            case 0x131844u: goto label_131844;
            case 0x131848u: goto label_131848;
            case 0x13184Cu: goto label_13184c;
            case 0x131850u: goto label_131850;
            case 0x131854u: goto label_131854;
            case 0x131858u: goto label_131858;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x131808u; }
            if (ctx->pc != 0x131808u) { return; }
        }
    }
    ctx->pc = 0x131808u;
label_131808:
    // 0x131808: 0x10000007  b           . + 4 + (0x7 << 2)
label_13180c:
    if (ctx->pc == 0x13180Cu) {
        ctx->pc = 0x13180Cu;
            // 0x13180c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x131810u;
        goto label_131810;
    }
    ctx->pc = 0x131808u;
    {
        const bool branch_taken_0x131808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13180Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131808u;
            // 0x13180c: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131808) {
            ctx->pc = 0x131828u;
            goto label_131828;
        }
    }
    ctx->pc = 0x131810u;
label_131810:
    // 0x131810: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x131810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_131814:
    // 0x131814: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x131814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_131818:
    // 0x131818: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x131818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_13181c:
    // 0x13181c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x13181cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_131820:
    // 0x131820: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x131820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_131824:
    // 0x131824: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x131824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_131828:
    // 0x131828: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x131828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13182c:
    // 0x13182c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_131830:
    if (ctx->pc == 0x131830u) {
        ctx->pc = 0x131834u;
        goto label_131834;
    }
    ctx->pc = 0x13182Cu;
    {
        const bool branch_taken_0x13182c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x13182c) {
            ctx->pc = 0x13183Cu;
            goto label_13183c;
        }
    }
    ctx->pc = 0x131834u;
label_131834:
    // 0x131834: 0xc04bb24  jal         func_12EC90
label_131838:
    if (ctx->pc == 0x131838u) {
        ctx->pc = 0x13183Cu;
        goto label_13183c;
    }
    ctx->pc = 0x131834u;
    SET_GPR_U32(ctx, 31, 0x13183Cu);
    ctx->pc = 0x12EC90u;
    if (runtime->hasFunction(0x12EC90u)) {
        auto targetFn = runtime->lookupFunction(0x12EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13183Cu; }
        if (ctx->pc != 0x13183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x12ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13183Cu; }
        if (ctx->pc != 0x13183Cu) { return; }
    }
    ctx->pc = 0x13183Cu;
label_13183c:
    // 0x13183c: 0xc04c5c6  jal         func_131718
label_131840:
    if (ctx->pc == 0x131840u) {
        ctx->pc = 0x131840u;
            // 0x131840: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x131844u;
        goto label_131844;
    }
    ctx->pc = 0x13183Cu;
    SET_GPR_U32(ctx, 31, 0x131844u);
    ctx->pc = 0x131840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13183Cu;
            // 0x131840: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131718u;
    if (runtime->hasFunction(0x131718u)) {
        auto targetFn = runtime->lookupFunction(0x131718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131844u; }
        if (ctx->pc != 0x131844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcFreePacket_0x131718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131844u; }
        if (ctx->pc != 0x131844u) { return; }
    }
    ctx->pc = 0x131844u;
label_131844:
    // 0x131844: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x131844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_131848:
    // 0x131848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13184c:
    // 0x13184c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13184cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131850:
    // 0x131850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131854:
    // 0x131854: 0x3e00008  jr          $ra
label_131858:
    if (ctx->pc == 0x131858u) {
        ctx->pc = 0x131858u;
            // 0x131858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13185Cu;
        goto label_fallthrough_0x131854;
    }
    ctx->pc = 0x131854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131854u;
            // 0x131858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1317A8u: goto label_1317a8;
            case 0x1317ACu: goto label_1317ac;
            case 0x1317B0u: goto label_1317b0;
            case 0x1317B4u: goto label_1317b4;
            case 0x1317B8u: goto label_1317b8;
            case 0x1317BCu: goto label_1317bc;
            case 0x1317C0u: goto label_1317c0;
            case 0x1317C4u: goto label_1317c4;
            case 0x1317C8u: goto label_1317c8;
            case 0x1317CCu: goto label_1317cc;
            case 0x1317D0u: goto label_1317d0;
            case 0x1317D4u: goto label_1317d4;
            case 0x1317D8u: goto label_1317d8;
            case 0x1317DCu: goto label_1317dc;
            case 0x1317E0u: goto label_1317e0;
            case 0x1317E4u: goto label_1317e4;
            case 0x1317E8u: goto label_1317e8;
            case 0x1317ECu: goto label_1317ec;
            case 0x1317F0u: goto label_1317f0;
            case 0x1317F4u: goto label_1317f4;
            case 0x1317F8u: goto label_1317f8;
            case 0x1317FCu: goto label_1317fc;
            case 0x131800u: goto label_131800;
            case 0x131804u: goto label_131804;
            case 0x131808u: goto label_131808;
            case 0x13180Cu: goto label_13180c;
            case 0x131810u: goto label_131810;
            case 0x131814u: goto label_131814;
            case 0x131818u: goto label_131818;
            case 0x13181Cu: goto label_13181c;
            case 0x131820u: goto label_131820;
            case 0x131824u: goto label_131824;
            case 0x131828u: goto label_131828;
            case 0x13182Cu: goto label_13182c;
            case 0x131830u: goto label_131830;
            case 0x131834u: goto label_131834;
            case 0x131838u: goto label_131838;
            case 0x13183Cu: goto label_13183c;
            case 0x131840u: goto label_131840;
            case 0x131844u: goto label_131844;
            case 0x131848u: goto label_131848;
            case 0x13184Cu: goto label_13184c;
            case 0x131850u: goto label_131850;
            case 0x131854u: goto label_131854;
            case 0x131858u: goto label_131858;
            default: break;
        }
        return;
    }
label_fallthrough_0x131854:
    ctx->pc = 0x13185Cu;
}
