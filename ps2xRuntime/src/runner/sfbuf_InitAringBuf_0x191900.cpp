#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_InitAringBuf
// Address: 0x191900 - 0x191998
void sfbuf_InitAringBuf_0x191900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_InitAringBuf");


    ctx->pc = 0x191900u;

    // 0x191900: 0x27bdffc0
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191904: 0x24020388
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x191908: 0xffb00000
    ctx->pc = 0x191908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19190c: 0xe0802d
    ctx->pc = 0x19190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191910: 0xffb20020
    ctx->pc = 0x191910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x191914: 0x2023818
    ctx->pc = 0x191914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x191918: 0x101880
    ctx->pc = 0x191918u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x19191c: 0xffb10010
    ctx->pc = 0x19191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x191920: 0xa39021
    ctx->pc = 0x191920u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x191924: 0xffbf0030
    ctx->pc = 0x191924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x191928: 0xc38821
    ctx->pc = 0x191928u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19192c: 0x24050002
    ctx->pc = 0x19192cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x191930: 0x8e260000
    ctx->pc = 0x191930u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x191934: 0xe48021
    ctx->pc = 0x191934u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x191938: 0x200202d
    ctx->pc = 0x191938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19193c: 0xc064696
    ctx->pc = 0x19193Cu;
    SET_GPR_U32(ctx, 31, 0x191944u);
    ctx->pc = 0x191940u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->pc = 0x191A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitBufData_0x191a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191944u; }
        else if (ctx->pc != 0x191944u) { ctx->pc = 0x191944u; }
    }
    if (ctx->pc != 0x191944u) { return; }
    ctx->pc = 0x191944u;
    // 0x191944: 0x8e440000
    ctx->pc = 0x191944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x191948: 0x26020010
    ctx->pc = 0x191948u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
    // 0x19194c: 0x8e230000
    ctx->pc = 0x19194cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x191950: 0xae040010
    ctx->pc = 0x191950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x191954: 0xdfbf0030
    ctx->pc = 0x191954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191958: 0xdfb20020
    ctx->pc = 0x191958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19195c: 0xdfb10010
    ctx->pc = 0x19195cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191960: 0xdfb00000
    ctx->pc = 0x191960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191964: 0xac430004
    ctx->pc = 0x191964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x191968: 0xac40002c
    ctx->pc = 0x191968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x19196c: 0xac400008
    ctx->pc = 0x19196cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x191970: 0xac40000c
    ctx->pc = 0x191970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x191974: 0xac400010
    ctx->pc = 0x191974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x191978: 0xac400014
    ctx->pc = 0x191978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x19197c: 0xac400018
    ctx->pc = 0x19197cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x191980: 0xac40001c
    ctx->pc = 0x191980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x191984: 0xac400020
    ctx->pc = 0x191984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x191988: 0xac400024
    ctx->pc = 0x191988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x19198c: 0xac400028
    ctx->pc = 0x19198cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x191990: 0x3e00008
    ctx->pc = 0x191990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191998u;
}
