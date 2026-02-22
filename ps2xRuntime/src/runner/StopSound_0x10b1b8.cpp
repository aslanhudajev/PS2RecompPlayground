#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StopSound
// Address: 0x10b1b8 - 0x10b214
void StopSound_0x10b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b1b8u;

    // 0x10b1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b1bc: 0x28820018  slti        $v0, $a0, 0x18
    ctx->pc = 0x10b1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x10b1c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B1C0u;
    {
        const bool branch_taken_0x10b1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1C0u;
            // 0x10b1c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1c0) {
            ctx->pc = 0x10B1D4u;
            goto label_10b1d4;
        }
    }
    ctx->pc = 0x10B1C8u;
    // 0x10b1c8: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x10b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x10b1cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B1CCu;
    {
        const bool branch_taken_0x10b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1CCu;
            // 0x10b1d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1cc) {
            ctx->pc = 0x10B1D8u;
            goto label_10b1d8;
        }
    }
    ctx->pc = 0x10B1D4u;
label_10b1d4:
    // 0x10b1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b1d8:
    // 0x10b1d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10b1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b1dc: 0x34c61600  ori         $a2, $a2, 0x1600
    ctx->pc = 0x10b1dcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)5632u)));
    // 0x10b1e0: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x10b1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x10b1e4: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x10b1e4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32816u)));
    // 0x10b1e8: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B1E8u;
    SET_GPR_U32(ctx, 31, 0x10B1F0u);
    ctx->pc = 0x10B1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1E8u;
            // 0x10b1ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1F0u; }
        if (ctx->pc != 0x10B1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1F0u; }
        if (ctx->pc != 0x10B1F0u) { return; }
    }
    ctx->pc = 0x10B1F0u;
    // 0x10b1f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b1f4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B1F4u;
    {
        const bool branch_taken_0x10b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1F4u;
            // 0x10b1f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1f4) {
            ctx->pc = 0x10B20Cu;
            goto label_10b20c;
        }
    }
    ctx->pc = 0x10B1FCu;
    // 0x10b1fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b200: 0x24843868  addiu       $a0, $a0, 0x3868
    ctx->pc = 0x10b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14440));
    // 0x10b204: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B204u;
    ctx->pc = 0x10B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B204u;
            // 0x10b208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B20Cu;
label_10b20c:
    // 0x10b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B20Cu;
            // 0x10b210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B1D4u: goto label_10b1d4;
            case 0x10B1D8u: goto label_10b1d8;
            case 0x10B20Cu: goto label_10b20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B214u;
}
