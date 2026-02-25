#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetHierarchy
// Address: 0x1195e8 - 0x1196bc
void SetHierarchy_0x1195e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetHierarchy_0x1195e8");
#endif

    ctx->pc = 0x1195e8u;

    // 0x1195e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1195e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1195ec: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1195ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1195f0: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x1195f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x1195f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1195f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195f8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1195f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1195fc: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x1195fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x119600: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x119600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x119604: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x119604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x119608: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x119608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11960c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119610: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x119610u;
    {
        const bool branch_taken_0x119610 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x119614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119610u;
            // 0x119614: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119610) {
            ctx->pc = 0x11969Cu;
            goto label_11969c;
        }
    }
    ctx->pc = 0x119618u;
    // 0x119618: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x119618u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11961c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x11961cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_119620:
    // 0x119620: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x119620u;
    SET_GPR_U32(ctx, 31, 0x119628u);
    ctx->pc = 0x119624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119620u;
            // 0x119624: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119628u; }
        if (ctx->pc != 0x119628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119628u; }
        if (ctx->pc != 0x119628u) { return; }
    }
    ctx->pc = 0x119628u;
    // 0x119628: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x119628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x11962c: 0x54740016  bnel        $v1, $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x11962Cu;
    {
        const bool branch_taken_0x11962c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x11962c) {
            ctx->pc = 0x119630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11962Cu;
            // 0x119630: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119688u;
            goto label_119688;
        }
    }
    ctx->pc = 0x119634u;
    // 0x119634: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x119634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x119638: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x119638u;
    {
        const bool branch_taken_0x119638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119638u;
            // 0x11963c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119638) {
            ctx->pc = 0x119660u;
            goto label_119660;
        }
    }
    ctx->pc = 0x119640u;
    // 0x119640: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x119640u;
    SET_GPR_U32(ctx, 31, 0x119648u);
    ctx->pc = 0x119644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119640u;
            // 0x119644: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119648u; }
        if (ctx->pc != 0x119648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119648u; }
        if (ctx->pc != 0x119648u) { return; }
    }
    ctx->pc = 0x119648u;
    // 0x119648: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x119648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11964c: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x11964Cu;
    SET_GPR_U32(ctx, 31, 0x119654u);
    ctx->pc = 0x119650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11964Cu;
            // 0x119650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119654u; }
        if (ctx->pc != 0x119654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119654u; }
        if (ctx->pc != 0x119654u) { return; }
    }
    ctx->pc = 0x119654u;
    // 0x119654: 0xfa600030  sqc2        $vf0, 0x30($s3)
    ctx->pc = 0x119654u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x119658: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119658u;
    {
        const bool branch_taken_0x119658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119658u;
            // 0x11965c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119658) {
            ctx->pc = 0x119674u;
            goto label_119674;
        }
    }
    ctx->pc = 0x119660u;
label_119660:
    // 0x119660: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x119660u;
    SET_GPR_U32(ctx, 31, 0x119668u);
    ctx->pc = 0x119664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119660u;
            // 0x119664: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119668u; }
        if (ctx->pc != 0x119668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119668u; }
        if (ctx->pc != 0x119668u) { return; }
    }
    ctx->pc = 0x119668u;
    // 0x119668: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x119668u;
    SET_GPR_U32(ctx, 31, 0x119670u);
    ctx->pc = 0x11966Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119668u;
            // 0x11966c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119670u; }
        if (ctx->pc != 0x119670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119670u; }
        if (ctx->pc != 0x119670u) { return; }
    }
    ctx->pc = 0x119670u;
    // 0x119670: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x119670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119674:
    // 0x119674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11967c: 0xc0463a6  jal         func_118E98
    ctx->pc = 0x11967Cu;
    SET_GPR_U32(ctx, 31, 0x119684u);
    ctx->pc = 0x119680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11967Cu;
            // 0x119680: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118E98u;
    if (runtime->hasFunction(0x118E98u)) {
        auto targetFn = runtime->lookupFunction(0x118E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119684u; }
        if (ctx->pc != 0x119684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHierarchyMatrix_0x118e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119684u; }
        if (ctx->pc != 0x119684u) { return; }
    }
    ctx->pc = 0x119684u;
    // 0x119684: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x119684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_119688:
    // 0x119688: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x119688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11968c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119690: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x119690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x119694: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x119694u;
    {
        const bool branch_taken_0x119694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119694) {
            ctx->pc = 0x119620u;
            goto label_119620;
        }
    }
    ctx->pc = 0x11969Cu;
label_11969c:
    // 0x11969c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x11969cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1196a0: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x1196a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1196a4: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x1196a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1196a8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1196a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1196ac: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x1196acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1196b0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1196b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1196b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1196B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196B4u;
            // 0x1196b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119620u: goto label_119620;
            case 0x119660u: goto label_119660;
            case 0x119674u: goto label_119674;
            case 0x119688u: goto label_119688;
            case 0x11969Cu: goto label_11969c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1196BCu;
}
