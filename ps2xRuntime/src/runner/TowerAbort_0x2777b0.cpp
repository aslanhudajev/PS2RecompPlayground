#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TowerAbort
// Address: 0x2777b0 - 0x277860
void TowerAbort_0x2777b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2777b0u;

    // 0x2777b0: 0x3c020034
    ctx->pc = 0x2777b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777b4: 0x2403ffff
    ctx->pc = 0x2777b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2777b8: 0xac43fa88
    ctx->pc = 0x2777b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965896), GPR_U32(ctx, 3));
    // 0x2777bc: 0x3c020034
    ctx->pc = 0x2777bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777c0: 0xac40fa8c
    ctx->pc = 0x2777c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965900), GPR_U32(ctx, 0));
    // 0x2777c4: 0x3c020034
    ctx->pc = 0x2777c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777c8: 0xac40fba8
    ctx->pc = 0x2777c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966184), GPR_U32(ctx, 0));
    // 0x2777cc: 0x3c020034
    ctx->pc = 0x2777ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777d0: 0xac40fbac
    ctx->pc = 0x2777d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966188), GPR_U32(ctx, 0));
    // 0x2777d4: 0x3c020034
    ctx->pc = 0x2777d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777d8: 0xac40fbb0
    ctx->pc = 0x2777d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966192), GPR_U32(ctx, 0));
    // 0x2777dc: 0x3c020034
    ctx->pc = 0x2777dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777e0: 0xac40fbb4
    ctx->pc = 0x2777e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966196), GPR_U32(ctx, 0));
    // 0x2777e4: 0x3c020034
    ctx->pc = 0x2777e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777e8: 0xac40fbb8
    ctx->pc = 0x2777e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966200), GPR_U32(ctx, 0));
    // 0x2777ec: 0x3c020034
    ctx->pc = 0x2777ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777f0: 0xac40fbbc
    ctx->pc = 0x2777f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966204), GPR_U32(ctx, 0));
    // 0x2777f4: 0x3c020034
    ctx->pc = 0x2777f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2777f8: 0xac40fbc0
    ctx->pc = 0x2777f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966208), GPR_U32(ctx, 0));
    // 0x2777fc: 0x3c020034
    ctx->pc = 0x2777fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277800: 0xac40fbc4
    ctx->pc = 0x277800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966212), GPR_U32(ctx, 0));
    // 0x277804: 0x3c020034
    ctx->pc = 0x277804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277808: 0xac40fbc8
    ctx->pc = 0x277808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966216), GPR_U32(ctx, 0));
    // 0x27780c: 0x3c020034
    ctx->pc = 0x27780cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277810: 0xac40fbcc
    ctx->pc = 0x277810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966220), GPR_U32(ctx, 0));
    // 0x277814: 0x3c020034
    ctx->pc = 0x277814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277818: 0xac40fbd0
    ctx->pc = 0x277818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966224), GPR_U32(ctx, 0));
    // 0x27781c: 0x3c020034
    ctx->pc = 0x27781cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277820: 0xac43fbd4
    ctx->pc = 0x277820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966228), GPR_U32(ctx, 3));
    // 0x277824: 0x3c020034
    ctx->pc = 0x277824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277828: 0xac43fbd8
    ctx->pc = 0x277828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966232), GPR_U32(ctx, 3));
    // 0x27782c: 0x3c020034
    ctx->pc = 0x27782cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277830: 0xac43fbdc
    ctx->pc = 0x277830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966236), GPR_U32(ctx, 3));
    // 0x277834: 0x3c020034
    ctx->pc = 0x277834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277838: 0xac43fbe0
    ctx->pc = 0x277838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966240), GPR_U32(ctx, 3));
    // 0x27783c: 0x3c020034
    ctx->pc = 0x27783cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277840: 0xac40fbe4
    ctx->pc = 0x277840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966244), GPR_U32(ctx, 0));
    // 0x277844: 0x3c020034
    ctx->pc = 0x277844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277848: 0xac40fbe8
    ctx->pc = 0x277848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966248), GPR_U32(ctx, 0));
    // 0x27784c: 0x3c020034
    ctx->pc = 0x27784cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277850: 0xac40fbec
    ctx->pc = 0x277850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966252), GPR_U32(ctx, 0));
    // 0x277854: 0x3c020034
    ctx->pc = 0x277854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277858: 0x3e00008
    ctx->pc = 0x277858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27785Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966256), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277860u;
}
