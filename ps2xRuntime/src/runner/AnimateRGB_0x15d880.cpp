#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: AnimateRGB
// Address: 0x15d880 - 0x15d974
void AnimateRGB_0x15d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AnimateRGB_0x15d880");
#endif

    ctx->pc = 0x15d880u;

    // 0x15d880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d884: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d88c: 0x90229cc8  lbu         $v0, -0x6338($at)
    ctx->pc = 0x15d88cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941896)));
    // 0x15d890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D890u;
    {
        const bool branch_taken_0x15d890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d890) {
            ctx->pc = 0x15D8A8u;
            goto label_15d8a8;
        }
    }
    ctx->pc = 0x15D898u;
    // 0x15d898: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x15d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x15d89c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d8a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D8A0u;
    {
        const bool branch_taken_0x15d8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8A0u;
            // 0x15d8a4: 0xa0229cc8  sb          $v0, -0x6338($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294941896), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8a0) {
            ctx->pc = 0x15D8B8u;
            goto label_15d8b8;
        }
    }
    ctx->pc = 0x15D8A8u;
label_15d8a8:
    // 0x15d8a8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15d8ac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d8b0: 0xa0229cc8  sb          $v0, -0x6338($at)
    ctx->pc = 0x15d8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294941896), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d8b4: 0x0  nop
    ctx->pc = 0x15d8b4u;
    // NOP
label_15d8b8:
    // 0x15d8b8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d8bc: 0x90229cd8  lbu         $v0, -0x6328($at)
    ctx->pc = 0x15d8bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941912)));
    // 0x15d8c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D8C0u;
    {
        const bool branch_taken_0x15d8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8C0u;
            // 0x15d8c4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8c0) {
            ctx->pc = 0x15D8F8u;
            goto label_15d8f8;
        }
    }
    ctx->pc = 0x15D8C8u;
    // 0x15d8c8: 0x90229cd0  lbu         $v0, -0x6330($at)
    ctx->pc = 0x15d8c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941904)));
    // 0x15d8cc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x15d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x15d8d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d8d4: 0xa0229cd0  sb          $v0, -0x6330($at)
    ctx->pc = 0x15d8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294941904), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d8d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d8dc: 0x90229cd0  lbu         $v0, -0x6330($at)
    ctx->pc = 0x15d8dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941904)));
    // 0x15d8e0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15D8E0u;
    {
        const bool branch_taken_0x15d8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d8e0) {
            ctx->pc = 0x15D928u;
            goto label_15d928;
        }
    }
    ctx->pc = 0x15D8E8u;
    // 0x15d8e8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d8ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15D8ECu;
    {
        const bool branch_taken_0x15d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D8ECu;
            // 0x15d8f0: 0xa0209cd8  sb          $zero, -0x6328($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294941912), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8ec) {
            ctx->pc = 0x15D928u;
            goto label_15d928;
        }
    }
    ctx->pc = 0x15D8F4u;
    // 0x15d8f4: 0x0  nop
    ctx->pc = 0x15d8f4u;
    // NOP
label_15d8f8:
    // 0x15d8f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d8fc: 0x90239cd0  lbu         $v1, -0x6330($at)
    ctx->pc = 0x15d8fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941904)));
    // 0x15d900: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15d904: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x15d904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15d908: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d90c: 0xa0239cd0  sb          $v1, -0x6330($at)
    ctx->pc = 0x15d90cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294941904), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d910: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d914: 0x90239cd0  lbu         $v1, -0x6330($at)
    ctx->pc = 0x15d914u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941904)));
    // 0x15d918: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D918u;
    {
        const bool branch_taken_0x15d918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D918u;
            // 0x15d91c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d918) {
            ctx->pc = 0x15D928u;
            goto label_15d928;
        }
    }
    ctx->pc = 0x15D920u;
    // 0x15d920: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d924: 0xa0229cd8  sb          $v0, -0x6328($at)
    ctx->pc = 0x15d924u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294941912), (uint8_t)GPR_U32(ctx, 2));
label_15d928:
    // 0x15d928: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d92c: 0x90289cc8  lbu         $t0, -0x6338($at)
    ctx->pc = 0x15d92cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941896)));
    // 0x15d930: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15d934: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x15d938: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15d938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d93c: 0x24849c60  addiu       $a0, $a0, -0x63A0
    ctx->pc = 0x15d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941792));
    // 0x15d940: 0xc057660  jal         func_15D980
    ctx->pc = 0x15D940u;
    SET_GPR_U32(ctx, 31, 0x15D948u);
    ctx->pc = 0x15D944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D940u;
            // 0x15d944: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D948u; }
        if (ctx->pc != 0x15D948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D948u; }
        if (ctx->pc != 0x15D948u) { return; }
    }
    ctx->pc = 0x15D948u;
    // 0x15d948: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15d948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15d94c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15d950: 0x90289cd0  lbu         $t0, -0x6330($at)
    ctx->pc = 0x15d950u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294941904)));
    // 0x15d954: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x15d958: 0x24849c68  addiu       $a0, $a0, -0x6398
    ctx->pc = 0x15d958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941800));
    // 0x15d95c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15d95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d960: 0xc057660  jal         func_15D980
    ctx->pc = 0x15D960u;
    SET_GPR_U32(ctx, 31, 0x15D968u);
    ctx->pc = 0x15D964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D960u;
            // 0x15d964: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D980u;
    if (runtime->hasFunction(0x15D980u)) {
        auto targetFn = runtime->lookupFunction(0x15D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D968u; }
        if (ctx->pc != 0x15D968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x15d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D968u; }
        if (ctx->pc != 0x15D968u) { return; }
    }
    ctx->pc = 0x15D968u;
    // 0x15d968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d96c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D96Cu;
            // 0x15d970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D8A8u: goto label_15d8a8;
            case 0x15D8B8u: goto label_15d8b8;
            case 0x15D8F8u: goto label_15d8f8;
            case 0x15D928u: goto label_15d928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D974u;
}
