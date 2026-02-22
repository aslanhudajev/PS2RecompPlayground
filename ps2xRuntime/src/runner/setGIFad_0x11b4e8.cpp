#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setGIFad
// Address: 0x11b4e8 - 0x11b518
void setGIFad_0x11b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b4e8u;

    // 0x11b4e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11b4ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11b4f0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x11b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x11b4f4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11b4f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11b4f8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x11b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x11b4fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11b500: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11b500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11b504: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x11b504u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x11b508: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11b508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11b50c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x11b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b510: 0x3e00008  jr          $ra
    ctx->pc = 0x11B510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B510u;
            // 0x11b514: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B518u;
}
