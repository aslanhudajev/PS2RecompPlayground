#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: movieKeys
// Address: 0x10c4b0 - 0x10c528
void movieKeys_0x10c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("movieKeys_0x10c4b0");
#endif

    ctx->pc = 0x10c4b0u;

    // 0x10c4b0: 0x8f8283f8  lw          $v0, -0x7C08($gp)
    ctx->pc = 0x10c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x10c4b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c4b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c4bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c4c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c4c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x10c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x10c4c8: 0x2843007d  slti        $v1, $v0, 0x7D
    ctx->pc = 0x10c4c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)125) ? 1 : 0);
    // 0x10c4cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10c4d0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x10c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x10c4d4: 0xaf8283f8  sw          $v0, -0x7C08($gp)
    ctx->pc = 0x10c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935544), GPR_U32(ctx, 2));
    // 0x10c4d8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10C4D8u;
    {
        const bool branch_taken_0x10c4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4D8u;
            // 0x10c4dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4d8) {
            ctx->pc = 0x10C51Cu;
            goto label_10c51c;
        }
    }
    ctx->pc = 0x10C4E0u;
    // 0x10c4e0: 0x8f828408  lw          $v0, -0x7BF8($gp)
    ctx->pc = 0x10c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
    // 0x10c4e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10C4E4u;
    {
        const bool branch_taken_0x10c4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4E4u;
            // 0x10c4e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4e4) {
            ctx->pc = 0x10C51Cu;
            goto label_10c51c;
        }
    }
    ctx->pc = 0x10C4ECu;
    // 0x10c4ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4f0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x10c4f0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
    // 0x10c4f4: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x10c4f4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)8u)));
    // 0x10c4f8: 0xc043024  jal         func_10C090
    ctx->pc = 0x10C4F8u;
    SET_GPR_U32(ctx, 31, 0x10C500u);
    ctx->pc = 0x10C4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4F8u;
            // 0x10c4fc: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)12u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C090u;
    if (runtime->hasFunction(0x10C090u)) {
        auto targetFn = runtime->lookupFunction(0x10C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C500u; }
        if (ctx->pc != 0x10C500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mypad_read_0x10c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C500u; }
        if (ctx->pc != 0x10C500u) { return; }
    }
    ctx->pc = 0x10C500u;
    // 0x10c500: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10c500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c504: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x10c504u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x10c508: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C508u;
    {
        const bool branch_taken_0x10c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C508u;
            // 0x10c50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c508) {
            ctx->pc = 0x10C51Cu;
            goto label_10c51c;
        }
    }
    ctx->pc = 0x10C510u;
    // 0x10c510: 0x30620900  andi        $v0, $v1, 0x900
    ctx->pc = 0x10c510u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2304u)));
    // 0x10c514: 0x38420900  xori        $v0, $v0, 0x900
    ctx->pc = 0x10c514u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2304u)));
    // 0x10c518: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10c518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10c51c:
    // 0x10c51c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c520: 0x3e00008  jr          $ra
    ctx->pc = 0x10C520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C520u;
            // 0x10c524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C51Cu: goto label_10c51c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10C528u;
}
