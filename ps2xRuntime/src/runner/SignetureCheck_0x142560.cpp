#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SignetureCheck
// Address: 0x142560 - 0x142610
void SignetureCheck_0x142560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SignetureCheck_0x142560");
#endif

    ctx->pc = 0x142560u;

    // 0x142560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x142564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x142564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x142568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14256c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x142570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x142578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14257c: 0xc050984  jal         func_142610
    ctx->pc = 0x14257Cu;
    SET_GPR_U32(ctx, 31, 0x142584u);
    ctx->pc = 0x142580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14257Cu;
            // 0x142580: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142584u; }
        if (ctx->pc != 0x142584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142584u; }
        if (ctx->pc != 0x142584u) { return; }
    }
    ctx->pc = 0x142584u;
    // 0x142584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142584u;
    {
        const bool branch_taken_0x142584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142584) {
            ctx->pc = 0x142598u;
            goto label_142598;
        }
    }
    ctx->pc = 0x14258Cu;
    // 0x14258c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14258Cu;
    {
        const bool branch_taken_0x14258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14258Cu;
            // 0x142590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14258c) {
            ctx->pc = 0x1425F8u;
            goto label_1425f8;
        }
    }
    ctx->pc = 0x142594u;
    // 0x142594: 0x0  nop
    ctx->pc = 0x142594u;
    // NOP
label_142598:
    // 0x142598: 0xc050984  jal         func_142610
    ctx->pc = 0x142598u;
    SET_GPR_U32(ctx, 31, 0x1425A0u);
    ctx->pc = 0x14259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142598u;
            // 0x14259c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142610u;
    if (runtime->hasFunction(0x142610u)) {
        auto targetFn = runtime->lookupFunction(0x142610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425A0u; }
        if (ctx->pc != 0x1425A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddressCheck_0x142610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425A0u; }
        if (ctx->pc != 0x1425A0u) { return; }
    }
    ctx->pc = 0x1425A0u;
    // 0x1425a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1425A0u;
    {
        const bool branch_taken_0x1425a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425a0) {
            ctx->pc = 0x1425B0u;
            goto label_1425b0;
        }
    }
    ctx->pc = 0x1425A8u;
    // 0x1425a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1425A8u;
    {
        const bool branch_taken_0x1425a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1425A8u;
            // 0x1425ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425a8) {
            ctx->pc = 0x1425F8u;
            goto label_1425f8;
        }
    }
    ctx->pc = 0x1425B0u;
label_1425b0:
    // 0x1425b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1425b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1425b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425b8: 0x24a50898  addiu       $a1, $a1, 0x898
    ctx->pc = 0x1425b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
    // 0x1425bc: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x1425BCu;
    SET_GPR_U32(ctx, 31, 0x1425C4u);
    ctx->pc = 0x1425C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1425BCu;
            // 0x1425c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (runtime->hasFunction(0x13D330u)) {
        auto targetFn = runtime->lookupFunction(0x13D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425C4u; }
        if (ctx->pc != 0x1425C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x13d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425C4u; }
        if (ctx->pc != 0x1425C4u) { return; }
    }
    ctx->pc = 0x1425C4u;
    // 0x1425c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1425C4u;
    {
        const bool branch_taken_0x1425c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425c4) {
            ctx->pc = 0x1425D0u;
            goto label_1425d0;
        }
    }
    ctx->pc = 0x1425CCu;
    // 0x1425cc: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x1425ccu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
label_1425d0:
    // 0x1425d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1425d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1425d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1425d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425d8: 0x24a508a0  addiu       $a1, $a1, 0x8A0
    ctx->pc = 0x1425d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2208));
    // 0x1425dc: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x1425DCu;
    SET_GPR_U32(ctx, 31, 0x1425E4u);
    ctx->pc = 0x1425E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1425DCu;
            // 0x1425e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (runtime->hasFunction(0x13D330u)) {
        auto targetFn = runtime->lookupFunction(0x13D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425E4u; }
        if (ctx->pc != 0x1425E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x13d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1425E4u; }
        if (ctx->pc != 0x1425E4u) { return; }
    }
    ctx->pc = 0x1425E4u;
    // 0x1425e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1425E4u;
    {
        const bool branch_taken_0x1425e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425e4) {
            ctx->pc = 0x1425F0u;
            goto label_1425f0;
        }
    }
    ctx->pc = 0x1425ECu;
    // 0x1425ec: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x1425ecu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)2u)));
label_1425f0:
    // 0x1425f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1425f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1425f4: 0x0  nop
    ctx->pc = 0x1425f4u;
    // NOP
label_1425f8:
    // 0x1425f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1425f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1425fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1425fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142608: 0x3e00008  jr          $ra
    ctx->pc = 0x142608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142608u;
            // 0x14260c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142598u: goto label_142598;
            case 0x1425B0u: goto label_1425b0;
            case 0x1425D0u: goto label_1425d0;
            case 0x1425F0u: goto label_1425f0;
            case 0x1425F8u: goto label_1425f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142610u;
}
