#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iRotateThreadReadyQueue
// Address: 0x1152d8 - 0x115354
void iRotateThreadReadyQueue_0x1152d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iRotateThreadReadyQueue_0x1152d8");
#endif

    ctx->pc = 0x1152d8u;

    // 0x1152d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1152dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1152dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1152e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1152e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152e4: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x1152e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1152e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1152E8u;
    {
        const bool branch_taken_0x1152e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1152E8u;
            // 0x1152ec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152e8) {
            ctx->pc = 0x115300u;
            goto label_115300;
        }
    }
    ctx->pc = 0x1152F0u;
    // 0x1152f0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1152f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1152f4: 0x8c43fbd8  lw          $v1, -0x428($v0)
    ctx->pc = 0x1152f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966232)));
    // 0x1152f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1152F8u;
    {
        const bool branch_taken_0x1152f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1152FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1152F8u;
            // 0x1152fc: 0x3c030018  lui         $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152f8) {
            ctx->pc = 0x115308u;
            goto label_115308;
        }
    }
    ctx->pc = 0x115300u;
label_115300:
    // 0x115300: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115300u;
    {
        const bool branch_taken_0x115300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115300u;
            // 0x115304: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115300) {
            ctx->pc = 0x115344u;
            goto label_115344;
        }
    }
    ctx->pc = 0x115308u;
label_115308:
    // 0x115308: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x115308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x11530c: 0x2463a2f8  addiu       $v1, $v1, -0x5D08
    ctx->pc = 0x11530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943480));
    // 0x115310: 0x8ca4a2f0  lw          $a0, -0x5D10($a1)
    ctx->pc = 0x115310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943472)));
    // 0x115314: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x115318: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x115318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11531c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x11531cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x115320: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x115320u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x115324: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x115328: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x115328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11532c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x11532cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x115330: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x115330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x115334: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x115334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115338: 0xc0438b4  jal         func_10E2D0
    ctx->pc = 0x115338u;
    SET_GPR_U32(ctx, 31, 0x115340u);
    ctx->pc = 0x11533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115338u;
            // 0x11533c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2D0u;
    if (runtime->hasFunction(0x10E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115340u; }
        if (ctx->pc != 0x115340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x10e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115340u; }
        if (ctx->pc != 0x115340u) { return; }
    }
    ctx->pc = 0x115340u;
    // 0x115340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115344:
    // 0x115344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11534c: 0x3e00008  jr          $ra
    ctx->pc = 0x11534Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11534Cu;
            // 0x115350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115300u: goto label_115300;
            case 0x115308u: goto label_115308;
            case 0x115344u: goto label_115344;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115354u;
}
