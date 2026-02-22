#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: changeInputVolume
// Address: 0x119f68 - 0x119fac
void changeInputVolume_0x119f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119f68u;

    // 0x119f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119f6c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x119f6cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x119f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119f74: 0x24060f80  addiu       $a2, $zero, 0xF80
    ctx->pc = 0x119f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3968));
    // 0x119f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119f80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x119f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f84: 0xc045c80  jal         func_117200
    ctx->pc = 0x119F84u;
    SET_GPR_U32(ctx, 31, 0x119F8Cu);
    ctx->pc = 0x119F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F84u;
            // 0x119f88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F8Cu; }
        if (ctx->pc != 0x119F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F8Cu; }
        if (ctx->pc != 0x119F8Cu) { return; }
    }
    ctx->pc = 0x119F8Cu;
    // 0x119f8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x119f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x119f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119f9c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x119f9cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x119fa0: 0x24061080  addiu       $a2, $zero, 0x1080
    ctx->pc = 0x119fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
    // 0x119fa4: 0x8045c80  j           func_117200
    ctx->pc = 0x119FA4u;
    ctx->pc = 0x119FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119FA4u;
            // 0x119fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceSdRemote_0x117200(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x119FACu;
}
