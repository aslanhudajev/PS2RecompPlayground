#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enemy_BloadCast_Child_Vector
// Address: 0x16e6b0 - 0x16e730
void Enemy_BloadCast_Child_Vector_0x16e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enemy_BloadCast_Child_Vector_0x16e6b0");
#endif

    ctx->pc = 0x16e6b0u;

    // 0x16e6b0: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16E6B0u;
    {
        const bool branch_taken_0x16e6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6B0u;
            // 0x16e6b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6b0) {
            ctx->pc = 0x16E728u;
            goto label_16e728;
        }
    }
    ctx->pc = 0x16E6B8u;
label_16e6b8:
    // 0x16e6b8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e6bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e6c0: 0xc4a00120  lwc1        $f0, 0x120($a1)
    ctx->pc = 0x16e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6c4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x16e6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x16e6c8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e6cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e6d0: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x16e6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6d4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x16e6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x16e6d8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e6dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e6e0: 0xc4a00128  lwc1        $f0, 0x128($a1)
    ctx->pc = 0x16e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6e4: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x16e6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x16e6e8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e6ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e6f0: 0xc4a00114  lwc1        $f0, 0x114($a1)
    ctx->pc = 0x16e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6f4: 0xe4600114  swc1        $f0, 0x114($v1)
    ctx->pc = 0x16e6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
    // 0x16e6f8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e6fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e700: 0xc4a00110  lwc1        $f0, 0x110($a1)
    ctx->pc = 0x16e700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e704: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x16e704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x16e708: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e70c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e710: 0xc4a00118  lwc1        $f0, 0x118($a1)
    ctx->pc = 0x16e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e714: 0xe4600118  swc1        $f0, 0x118($v1)
    ctx->pc = 0x16e714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
    // 0x16e718: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x16e71c: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16E71Cu;
    {
        const bool branch_taken_0x16e71c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e71c) {
            ctx->pc = 0x16E6B8u;
            goto label_16e6b8;
        }
    }
    ctx->pc = 0x16E724u;
    // 0x16e724: 0x0  nop
    ctx->pc = 0x16e724u;
    // NOP
label_16e728:
    // 0x16e728: 0x3e00008  jr          $ra
    ctx->pc = 0x16E728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E6B8u: goto label_16e6b8;
            case 0x16E728u: goto label_16e728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E730u;
}
