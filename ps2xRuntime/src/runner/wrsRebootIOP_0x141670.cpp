#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRebootIOP
// Address: 0x141670 - 0x141724
void wrsRebootIOP_0x141670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRebootIOP_0x141670");
#endif

    ctx->pc = 0x141670u;

    // 0x141670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141678: 0xc04c52a  jal         func_1314A8
    ctx->pc = 0x141678u;
    SET_GPR_U32(ctx, 31, 0x141680u);
    ctx->pc = 0x14167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141678u;
            // 0x14167c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314A8u;
    if (runtime->hasFunction(0x1314A8u)) {
        auto targetFn = runtime->lookupFunction(0x1314A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141680u; }
        if (ctx->pc != 0x141680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x1314a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141680u; }
        if (ctx->pc != 0x141680u) { return; }
    }
    ctx->pc = 0x141680u;
label_141680:
    // 0x141680: 0xc041144  jal         func_104510
    ctx->pc = 0x141680u;
    SET_GPR_U32(ctx, 31, 0x141688u);
    ctx->pc = 0x141684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141680u;
            // 0x141684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104510u;
    if (runtime->hasFunction(0x104510u)) {
        auto targetFn = runtime->lookupFunction(0x104510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141688u; }
        if (ctx->pc != 0x141688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x104510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141688u; }
        if (ctx->pc != 0x141688u) { return; }
    }
    ctx->pc = 0x141688u;
    // 0x141688: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x141688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14168c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14168cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x141690: 0x0  nop
    ctx->pc = 0x141690u;
    // NOP
    // 0x141694: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141694u;
    {
        const bool branch_taken_0x141694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141694) {
            ctx->pc = 0x141680u;
            goto label_141680;
        }
    }
    ctx->pc = 0x14169Cu;
    // 0x14169c: 0xc041144  jal         func_104510
    ctx->pc = 0x14169Cu;
    SET_GPR_U32(ctx, 31, 0x1416A4u);
    ctx->pc = 0x1416A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14169Cu;
            // 0x1416a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104510u;
    if (runtime->hasFunction(0x104510u)) {
        auto targetFn = runtime->lookupFunction(0x104510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416A4u; }
        if (ctx->pc != 0x1416A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x104510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416A4u; }
        if (ctx->pc != 0x1416A4u) { return; }
    }
    ctx->pc = 0x1416A4u;
    // 0x1416a4: 0xc0413f4  jal         func_104FD0
    ctx->pc = 0x1416A4u;
    SET_GPR_U32(ctx, 31, 0x1416ACu);
    ctx->pc = 0x1416A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1416A4u;
            // 0x1416a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104FD0u;
    if (runtime->hasFunction(0x104FD0u)) {
        auto targetFn = runtime->lookupFunction(0x104FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416ACu; }
        if (ctx->pc != 0x1416ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x104fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416ACu; }
        if (ctx->pc != 0x1416ACu) { return; }
    }
    ctx->pc = 0x1416ACu;
    // 0x1416ac: 0x0  nop
    ctx->pc = 0x1416acu;
    // NOP
label_1416b0:
    // 0x1416b0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1416b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1416b4: 0xc04dc02  jal         func_137008
    ctx->pc = 0x1416B4u;
    SET_GPR_U32(ctx, 31, 0x1416BCu);
    ctx->pc = 0x1416B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1416B4u;
            // 0x1416b8: 0x24840720  addiu       $a0, $a0, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137008u;
    if (runtime->hasFunction(0x137008u)) {
        auto targetFn = runtime->lookupFunction(0x137008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416BCu; }
        if (ctx->pc != 0x1416BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRebootIop_0x137008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416BCu; }
        if (ctx->pc != 0x1416BCu) { return; }
    }
    ctx->pc = 0x1416BCu;
    // 0x1416bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1416bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1416c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1416c0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1416c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1416C4u;
    {
        const bool branch_taken_0x1416c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1416c4) {
            ctx->pc = 0x1416B0u;
            goto label_1416b0;
        }
    }
    ctx->pc = 0x1416CCu;
    // 0x1416cc: 0x0  nop
    ctx->pc = 0x1416ccu;
    // NOP
label_1416d0:
    // 0x1416d0: 0xc04dbf4  jal         func_136FD0
    ctx->pc = 0x1416D0u;
    SET_GPR_U32(ctx, 31, 0x1416D8u);
    ctx->pc = 0x136FD0u;
    if (runtime->hasFunction(0x136FD0u)) {
        auto targetFn = runtime->lookupFunction(0x136FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416D8u; }
        if (ctx->pc != 0x1416D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSyncIop_0x136fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416D8u; }
        if (ctx->pc != 0x1416D8u) { return; }
    }
    ctx->pc = 0x1416D8u;
    // 0x1416d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1416d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1416dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1416dcu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1416e0: 0x0  nop
    ctx->pc = 0x1416e0u;
    // NOP
    // 0x1416e4: 0x0  nop
    ctx->pc = 0x1416e4u;
    // NOP
    // 0x1416e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1416E8u;
    {
        const bool branch_taken_0x1416e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1416e8) {
            ctx->pc = 0x1416D0u;
            goto label_1416d0;
        }
    }
    ctx->pc = 0x1416F0u;
    // 0x1416f0: 0xc04c52a  jal         func_1314A8
    ctx->pc = 0x1416F0u;
    SET_GPR_U32(ctx, 31, 0x1416F8u);
    ctx->pc = 0x1416F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1416F0u;
            // 0x1416f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314A8u;
    if (runtime->hasFunction(0x1314A8u)) {
        auto targetFn = runtime->lookupFunction(0x1314A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416F8u; }
        if (ctx->pc != 0x1416F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x1314a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416F8u; }
        if (ctx->pc != 0x1416F8u) { return; }
    }
    ctx->pc = 0x1416F8u;
    // 0x1416f8: 0xc041144  jal         func_104510
    ctx->pc = 0x1416F8u;
    SET_GPR_U32(ctx, 31, 0x141700u);
    ctx->pc = 0x1416FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1416F8u;
            // 0x1416fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104510u;
    if (runtime->hasFunction(0x104510u)) {
        auto targetFn = runtime->lookupFunction(0x104510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141700u; }
        if (ctx->pc != 0x141700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x104510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141700u; }
        if (ctx->pc != 0x141700u) { return; }
    }
    ctx->pc = 0x141700u;
    // 0x141700: 0xc0413f4  jal         func_104FD0
    ctx->pc = 0x141700u;
    SET_GPR_U32(ctx, 31, 0x141708u);
    ctx->pc = 0x141704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141700u;
            // 0x141704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104FD0u;
    if (runtime->hasFunction(0x104FD0u)) {
        auto targetFn = runtime->lookupFunction(0x104FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141708u; }
        if (ctx->pc != 0x141708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x104fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141708u; }
        if (ctx->pc != 0x141708u) { return; }
    }
    ctx->pc = 0x141708u;
    // 0x141708: 0xc04cb72  jal         func_132DC8
    ctx->pc = 0x141708u;
    SET_GPR_U32(ctx, 31, 0x141710u);
    ctx->pc = 0x132DC8u;
    if (runtime->hasFunction(0x132DC8u)) {
        auto targetFn = runtime->lookupFunction(0x132DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141710u; }
        if (ctx->pc != 0x141710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceFsReset_0x132dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141710u; }
        if (ctx->pc != 0x141710u) { return; }
    }
    ctx->pc = 0x141710u;
    // 0x141710: 0xc0505cc  jal         func_141730
    ctx->pc = 0x141710u;
    SET_GPR_U32(ctx, 31, 0x141718u);
    ctx->pc = 0x141714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141710u;
            // 0x141714: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141730u;
    if (runtime->hasFunction(0x141730u)) {
        auto targetFn = runtime->lookupFunction(0x141730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141718u; }
        if (ctx->pc != 0x141718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSifLoadModules_0x141730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141718u; }
        if (ctx->pc != 0x141718u) { return; }
    }
    ctx->pc = 0x141718u;
    // 0x141718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14171c: 0x3e00008  jr          $ra
    ctx->pc = 0x14171Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14171Cu;
            // 0x141720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141680u: goto label_141680;
            case 0x1416B0u: goto label_1416b0;
            case 0x1416D0u: goto label_1416d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141724u;
}
