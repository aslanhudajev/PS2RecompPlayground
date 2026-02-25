#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_00109068
// Address: 0x109068 - 0x1090c0
void sub_00109068_0x109068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00109068_0x109068");
#endif

    ctx->pc = 0x109068u;

    // 0x109068: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x109068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10906c: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x10906cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x109070: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x109070u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x109074: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109078: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x109078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x10907c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10907cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x109080: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x109080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x109084: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x109084u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x109088: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x109088u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x10908c: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x10908cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x109090: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x109090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x109094: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x109094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x109098: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x109098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10909c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10909cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1090a0: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x1090a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x1090a4: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x1090a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1090a8: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x1090a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1090ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1090acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1090b0: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x1090b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x1090b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1090b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1090b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1090B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1090BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1090B8u;
            // 0x1090bc: 0xfc830020  sd          $v1, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1090C0u;
}
