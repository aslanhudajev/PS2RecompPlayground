#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: HrchyInit
// Address: 0x1196c0 - 0x11974c
void HrchyInit_0x1196c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("HrchyInit_0x1196c0");
#endif

    ctx->pc = 0x1196c0u;

    // 0x1196c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1196c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1196c4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1196c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1196c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1196c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1196cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1196ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1196d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1196d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1196d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196d8: 0xdc45e6b0  ld          $a1, -0x1950($v0)
    ctx->pc = 0x1196d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960816)));
    // 0x1196dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1196dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1196e0: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1196E0u;
    SET_GPR_U32(ctx, 31, 0x1196E8u);
    ctx->pc = 0x1196E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196E0u;
            // 0x1196e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196E8u; }
        if (ctx->pc != 0x1196E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1196E8u; }
        if (ctx->pc != 0x1196E8u) { return; }
    }
    ctx->pc = 0x1196E8u;
    // 0x1196e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1196E8u;
    {
        const bool branch_taken_0x1196e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196E8u;
            // 0x1196ec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196e8) {
            ctx->pc = 0x119728u;
            goto label_119728;
        }
    }
    ctx->pc = 0x1196F0u;
    // 0x1196f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1196f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1196f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196f8: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1196F8u;
    SET_GPR_U32(ctx, 31, 0x119700u);
    ctx->pc = 0x1196FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1196F8u;
            // 0x1196fc: 0xdc45e6b8  ld          $a1, -0x1948($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960824)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119700u; }
        if (ctx->pc != 0x119700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119700u; }
        if (ctx->pc != 0x119700u) { return; }
    }
    ctx->pc = 0x119700u;
    // 0x119700: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x119700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x119704: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x119704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x119708: 0xdc65e6c0  ld          $a1, -0x1940($v1)
    ctx->pc = 0x119708u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294960832)));
    // 0x11970c: 0xc047128  jal         func_11C4A0
    ctx->pc = 0x11970Cu;
    SET_GPR_U32(ctx, 31, 0x119714u);
    ctx->pc = 0x119710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11970Cu;
            // 0x119710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4A0u;
    if (runtime->hasFunction(0x11C4A0u)) {
        auto targetFn = runtime->lookupFunction(0x11C4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119714u; }
        if (ctx->pc != 0x119714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetHead_0x11c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119714u; }
        if (ctx->pc != 0x119714u) { return; }
    }
    ctx->pc = 0x119714u;
    // 0x119714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119714u;
    {
        const bool branch_taken_0x119714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119714u;
            // 0x119718: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119714) {
            ctx->pc = 0x119728u;
            goto label_119728;
        }
    }
    ctx->pc = 0x11971Cu;
    // 0x11971c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119720: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119720u;
    {
        const bool branch_taken_0x119720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119720u;
            // 0x119724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119720) {
            ctx->pc = 0x119738u;
            goto label_119738;
        }
    }
    ctx->pc = 0x119728u;
label_119728:
    // 0x119728: 0xc04639a  jal         func_118E68
    ctx->pc = 0x119728u;
    SET_GPR_U32(ctx, 31, 0x119730u);
    ctx->pc = 0x11972Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119728u;
            // 0x11972c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118E68u;
    if (runtime->hasFunction(0x118E68u)) {
        auto targetFn = runtime->lookupFunction(0x118E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119730u; }
        if (ctx->pc != 0x119730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_hrchy_err_0x118e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119730u; }
        if (ctx->pc != 0x119730u) { return; }
    }
    ctx->pc = 0x119730u;
    // 0x119730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119730u;
    {
        const bool branch_taken_0x119730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119730u;
            // 0x119734: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119730) {
            ctx->pc = 0x11973Cu;
            goto label_11973c;
        }
    }
    ctx->pc = 0x119738u;
label_119738:
    // 0x119738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11973c:
    // 0x11973c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11973cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119744: 0x3e00008  jr          $ra
    ctx->pc = 0x119744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119744u;
            // 0x119748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119728u: goto label_119728;
            case 0x119738u: goto label_119738;
            case 0x11973Cu: goto label_11973c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11974Cu;
}
