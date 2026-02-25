#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Camera_SetClipScreen
// Address: 0x1612a0 - 0x1612d4
void Camera_SetClipScreen_0x1612a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Camera_SetClipScreen_0x1612a0");
#endif

    ctx->pc = 0x1612a0u;

    // 0x1612a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1612a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1612a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1612a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1612a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1612ac: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1612b0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1612b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1612b4: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1612b8: 0x244601d0  addiu       $a2, $v0, 0x1D0
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x1612bc: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x1612bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1612c0: 0xc0584c0  jal         func_161300
    ctx->pc = 0x1612C0u;
    SET_GPR_U32(ctx, 31, 0x1612C8u);
    ctx->pc = 0x1612C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1612C0u;
            // 0x1612c4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x161300u;
    if (runtime->hasFunction(0x161300u)) {
        auto targetFn = runtime->lookupFunction(0x161300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612C8u; }
        if (ctx->pc != 0x1612C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVu0ViewScreenClipMatrix_0x161300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612C8u; }
        if (ctx->pc != 0x1612C8u) { return; }
    }
    ctx->pc = 0x1612C8u;
    // 0x1612c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1612c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1612cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1612CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1612D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612CCu;
            // 0x1612d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1612D4u;
}
