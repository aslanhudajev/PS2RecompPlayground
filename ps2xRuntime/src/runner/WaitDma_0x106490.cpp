#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: WaitDma
// Address: 0x106490 - 0x106500
void WaitDma_0x106490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("WaitDma_0x106490");
#endif

    ctx->pc = 0x106490u;

    // 0x106490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106494: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10649c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x1064a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1064a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1064a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1064a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1064a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1064ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1064acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1064b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1064b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x1064b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1064B4u;
    {
        const bool branch_taken_0x1064b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064B4u;
            // 0x1064b8: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064b4) {
            ctx->pc = 0x1064E8u;
            goto label_1064e8;
        }
    }
    ctx->pc = 0x1064BCu;
    // 0x1064bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1064bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1064c0:
    // 0x1064c0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1064C0u;
    {
        const bool branch_taken_0x1064c0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1064c0) {
            ctx->pc = 0x1064D8u;
            goto label_1064d8;
        }
    }
    ctx->pc = 0x1064C8u;
    // 0x1064c8: 0xc04c340  jal         func_130D00
    ctx->pc = 0x1064C8u;
    SET_GPR_U32(ctx, 31, 0x1064D0u);
    ctx->pc = 0x1064CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1064C8u;
            // 0x1064cc: 0x2644c8a0  addiu       $a0, $s2, -0x3760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064D0u; }
        if (ctx->pc != 0x1064D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x130d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064D0u; }
        if (ctx->pc != 0x1064D0u) { return; }
    }
    ctx->pc = 0x1064D0u;
    // 0x1064d0: 0xc041b0a  jal         func_106C28
    ctx->pc = 0x1064D0u;
    SET_GPR_U32(ctx, 31, 0x1064D8u);
    ctx->pc = 0x1064D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1064D0u;
            // 0x1064d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106C28u;
    if (runtime->hasFunction(0x106C28u)) {
        auto targetFn = runtime->lookupFunction(0x106C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064D8u; }
        if (ctx->pc != 0x1064D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaPause_0x106c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064D8u; }
        if (ctx->pc != 0x1064D8u) { return; }
    }
    ctx->pc = 0x1064D8u;
label_1064d8:
    // 0x1064d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1064d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1064dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1064dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x1064e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1064E0u;
    {
        const bool branch_taken_0x1064e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1064E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064E0u;
            // 0x1064e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064e0) {
            ctx->pc = 0x1064C0u;
            goto label_1064c0;
        }
    }
    ctx->pc = 0x1064E8u;
label_1064e8:
    // 0x1064e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1064e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1064ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1064ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1064f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1064f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1064f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1064f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1064f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1064F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064F8u;
            // 0x1064fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1064C0u: goto label_1064c0;
            case 0x1064D8u: goto label_1064d8;
            case 0x1064E8u: goto label_1064e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106500u;
}
