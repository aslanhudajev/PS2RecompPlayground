#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _setlocale_r
// Address: 0x13a428 - 0x13a4ac
void _setlocale_r_0x13a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_setlocale_r_0x13a428");
#endif

    ctx->pc = 0x13a428u;

    // 0x13a428: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13a428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13a42c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13a430: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13a430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13a434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13a434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a43c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13a43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a440: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13a440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13a444: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13a444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a448: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x13A448u;
    {
        const bool branch_taken_0x13a448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A448u;
            // 0x13a44c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a448) {
            ctx->pc = 0x13A488u;
            goto label_13a488;
        }
    }
    ctx->pc = 0x13A450u;
    // 0x13a450: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x13a450u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x13a454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a458: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x13A458u;
    SET_GPR_U32(ctx, 31, 0x13A460u);
    ctx->pc = 0x13A45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A458u;
            // 0x13a45c: 0x2665fb80  addiu       $a1, $s3, -0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A460u; }
        if (ctx->pc != 0x13A460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A460u; }
        if (ctx->pc != 0x13A460u) { return; }
    }
    ctx->pc = 0x13A460u;
    // 0x13a460: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A460u;
    {
        const bool branch_taken_0x13a460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A460u;
            // 0x13a464: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a460) {
            ctx->pc = 0x13A47Cu;
            goto label_13a47c;
        }
    }
    ctx->pc = 0x13A468u;
    // 0x13a468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a46c: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x13A46Cu;
    SET_GPR_U32(ctx, 31, 0x13A474u);
    ctx->pc = 0x13A470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A46Cu;
            // 0x13a470: 0x24a5fb70  addiu       $a1, $a1, -0x490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A474u; }
        if (ctx->pc != 0x13A474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A474u; }
        if (ctx->pc != 0x13A474u) { return; }
    }
    ctx->pc = 0x13A474u;
    // 0x13a474: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A474u;
    {
        const bool branch_taken_0x13a474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A474u;
            // 0x13a478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a474) {
            ctx->pc = 0x13A490u;
            goto label_13a490;
        }
    }
    ctx->pc = 0x13A47Cu;
label_13a47c:
    // 0x13a47c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x13a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x13a480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A480u;
    {
        const bool branch_taken_0x13a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A480u;
            // 0x13a484: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a480) {
            ctx->pc = 0x13A48Cu;
            goto label_13a48c;
        }
    }
    ctx->pc = 0x13A488u;
label_13a488:
    // 0x13a488: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
label_13a48c:
    // 0x13a48c: 0x2662fb80  addiu       $v0, $s3, -0x480
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966144));
label_13a490:
    // 0x13a490: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a494: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13a494u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a498: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a49c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13a49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4A4u;
            // 0x13a4a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A47Cu: goto label_13a47c;
            case 0x13A488u: goto label_13a488;
            case 0x13A48Cu: goto label_13a48c;
            case 0x13A490u: goto label_13a490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A4ACu;
}
