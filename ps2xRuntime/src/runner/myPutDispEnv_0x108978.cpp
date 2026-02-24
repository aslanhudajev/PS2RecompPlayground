#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: myPutDispEnv
// Address: 0x108978 - 0x1089e4
void myPutDispEnv_0x108978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("myPutDispEnv_0x108978");
#endif

    ctx->pc = 0x108978u;

    // 0x108978: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x108978u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10897c: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x10897cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x108980: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x108980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x108984: 0x3c081200  lui         $t0, 0x1200
    ctx->pc = 0x108984u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4608 << 16));
    // 0x108988: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x108988u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x10898c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x10898cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32u)));
    // 0x108990: 0x35080070  ori         $t0, $t0, 0x70
    ctx->pc = 0x108990u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)112u)));
    // 0x108994: 0x3c071200  lui         $a3, 0x1200
    ctx->pc = 0x108994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4608 << 16));
    // 0x108998: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10899c: 0x34e70090  ori         $a3, $a3, 0x90
    ctx->pc = 0x10899cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)144u)));
    // 0x1089a0: 0x3c091200  lui         $t1, 0x1200
    ctx->pc = 0x1089a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4608 << 16));
    // 0x1089a4: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x1089a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x1089a8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1089a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1089ac: 0x35290080  ori         $t1, $t1, 0x80
    ctx->pc = 0x1089acu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)128u)));
    // 0x1089b0: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1089b0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)160u)));
    // 0x1089b4: 0x34a500e0  ori         $a1, $a1, 0xE0
    ctx->pc = 0x1089b4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)224u)));
    // 0x1089b8: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x1089b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1089bc: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1089bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1089c0: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x1089c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1089c4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1089c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1089c8: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x1089c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1089cc: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x1089ccu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1089d0: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x1089d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1089d4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1089d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1089d8: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x1089d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1089dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1089DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1089DCu;
            // 0x1089e0: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1089E4u;
}
