#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ProcessEs
// Address: 0x181770 - 0x18180c
void ProcessEs_0x181770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ProcessEs_0x181770");
#endif

    ctx->pc = 0x181770u;

    // 0x181770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181774: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x181774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x181778: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x181778u;
    {
        const bool branch_taken_0x181778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181778u;
            // 0x18177c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181778) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x181780u;
    // 0x181780: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x181780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x181784: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x181784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x181788: 0x24632050  addiu       $v1, $v1, 0x2050
    ctx->pc = 0x181788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8272));
    // 0x18178c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181790: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181794: 0x400008  jr          $v0
    ctx->pc = 0x181794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1817A0u: goto label_1817a0;
            case 0x1817A8u: goto label_1817a8;
            case 0x1817B0u: goto label_1817b0;
            case 0x1817B8u: goto label_1817b8;
            case 0x1817C0u: goto label_1817c0;
            case 0x1817C8u: goto label_1817c8;
            case 0x1817D0u: goto label_1817d0;
            case 0x1817D8u: goto label_1817d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18179Cu;
    // 0x18179c: 0x0  nop
    ctx->pc = 0x18179cu;
    // NOP
label_1817a0:
    // 0x1817a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1817A0u;
    {
        const bool branch_taken_0x1817a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817A0u;
            // 0x1817a4: 0x8c840170  lw          $a0, 0x170($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817a0) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817A8u;
label_1817a8:
    // 0x1817a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1817A8u;
    {
        const bool branch_taken_0x1817a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817A8u;
            // 0x1817ac: 0x8c840174  lw          $a0, 0x174($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817a8) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817B0u;
label_1817b0:
    // 0x1817b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1817B0u;
    {
        const bool branch_taken_0x1817b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817B0u;
            // 0x1817b4: 0x8c840178  lw          $a0, 0x178($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817b0) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817B8u;
label_1817b8:
    // 0x1817b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1817B8u;
    {
        const bool branch_taken_0x1817b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817B8u;
            // 0x1817bc: 0x8c84017c  lw          $a0, 0x17C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817b8) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817C0u;
label_1817c0:
    // 0x1817c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1817C0u;
    {
        const bool branch_taken_0x1817c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817C0u;
            // 0x1817c4: 0x8c840180  lw          $a0, 0x180($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817c0) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817C8u;
label_1817c8:
    // 0x1817c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1817C8u;
    {
        const bool branch_taken_0x1817c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817C8u;
            // 0x1817cc: 0x8c840184  lw          $a0, 0x184($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817c8) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817D0u;
label_1817d0:
    // 0x1817d0: 0x8c840188  lw          $a0, 0x188($a0)
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x1817d4: 0x0  nop
    ctx->pc = 0x1817d4u;
    // NOP
label_1817d8:
    // 0x1817d8: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x1817D8u;
    SET_GPR_U32(ctx, 31, 0x1817E0u);
    ctx->pc = 0x1817DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1817D8u;
            // 0x1817dc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817E0u; }
        if (ctx->pc != 0x1817E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817E0u; }
        if (ctx->pc != 0x1817E0u) { return; }
    }
    ctx->pc = 0x1817E0u;
    // 0x1817e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1817e0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1817e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1817E4u;
    {
        const bool branch_taken_0x1817e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817E4u;
            // 0x1817e8: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817e4) {
            ctx->pc = 0x181800u;
            goto label_181800;
        }
    }
    ctx->pc = 0x1817ECu;
    // 0x1817ec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1817f0: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x1817f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x1817f4: 0x24842040  addiu       $a0, $a0, 0x2040
    ctx->pc = 0x1817f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8256));
    // 0x1817f8: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1817F8u;
    SET_GPR_U32(ctx, 31, 0x181800u);
    ctx->pc = 0x1817FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1817F8u;
            // 0x1817fc: 0x2405008e  addiu       $a1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181800u; }
        if (ctx->pc != 0x181800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181800u; }
        if (ctx->pc != 0x181800u) { return; }
    }
    ctx->pc = 0x181800u;
label_181800:
    // 0x181800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181804: 0x3e00008  jr          $ra
    ctx->pc = 0x181804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181804u;
            // 0x181808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1817A0u: goto label_1817a0;
            case 0x1817A8u: goto label_1817a8;
            case 0x1817B0u: goto label_1817b0;
            case 0x1817B8u: goto label_1817b8;
            case 0x1817C0u: goto label_1817c0;
            case 0x1817C8u: goto label_1817c8;
            case 0x1817D0u: goto label_1817d0;
            case 0x1817D8u: goto label_1817d8;
            case 0x181800u: goto label_181800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18180Cu;
}
