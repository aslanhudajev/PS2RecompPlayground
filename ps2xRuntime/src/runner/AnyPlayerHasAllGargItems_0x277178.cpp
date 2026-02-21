#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnyPlayerHasAllGargItems
// Address: 0x277178 - 0x277264
void AnyPlayerHasAllGargItems_0x277178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x277178u;

    // 0x277178: 0x27bdff70
    ctx->pc = 0x277178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27717c: 0xffbf0080
    ctx->pc = 0x27717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x277180: 0xffb70070
    ctx->pc = 0x277180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x277184: 0xffb60060
    ctx->pc = 0x277184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x277188: 0xffb50050
    ctx->pc = 0x277188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27718c: 0xffb40040
    ctx->pc = 0x27718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x277190: 0xffb30030
    ctx->pc = 0x277190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x277194: 0xffb20020
    ctx->pc = 0x277194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277198: 0xffb10010
    ctx->pc = 0x277198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27719c: 0xffb00000
    ctx->pc = 0x27719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2771a0: 0x902d
    ctx->pc = 0x2771a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771a4: 0x28820003
    ctx->pc = 0x2771a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x2771a8: 0x24030002
    ctx->pc = 0x2771a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2771ac: 0x60982d
    ctx->pc = 0x2771acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771b0: 0x82980b
    ctx->pc = 0x2771b0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
    // 0x2771b4: 0x882d
    ctx->pc = 0x2771b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771b8: 0x24172b00
    ctx->pc = 0x2771b8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2771bc: 0x3c020032
    ctx->pc = 0x2771bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2771c0: 0x24561bc0
    ctx->pc = 0x2771c0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2771c4: 0x13a040
    ctx->pc = 0x2771c4u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 19), 1));
    // 0x2771c8: 0x241500b4
    ctx->pc = 0x2771c8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2771cc: 0x2371018
    ctx->pc = 0x2771ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2771d0:
    // 0x2771d0: 0x568021
    ctx->pc = 0x2771d0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2771d4: 0x8e0200fc
    ctx->pc = 0x2771d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2771d8: 0x1040000c
    ctx->pc = 0x2771D8u;
    {
        const bool branch_taken_0x2771d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2771DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2771d8) {
            ctx->pc = 0x27720Cu;
            goto label_27720c;
        }
    }
    ctx->pc = 0x2771E0u;
    // 0x2771e0: 0xc09dc3e
    ctx->pc = 0x2771E0u;
    SET_GPR_U32(ctx, 31, 0x2771E8u);
    ctx->pc = 0x2771E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2770F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasAllGargItems_0x2770f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2771E8u; }
    }
    if (ctx->pc != 0x2771E8u) { return; }
    ctx->pc = 0x2771E8u;
    // 0x2771e8: 0x14400013
    ctx->pc = 0x2771E8u;
    {
        const bool branch_taken_0x2771e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2771ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2771e8) {
            ctx->pc = 0x277238u;
            goto label_277238;
        }
    }
    ctx->pc = 0x2771F0u;
    // 0x2771f0: 0x8e02000c
    ctx->pc = 0x2771f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2771f4: 0x551818
    ctx->pc = 0x2771f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2771f8: 0x741021
    ctx->pc = 0x2771f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2771fc: 0x2021021
    ctx->pc = 0x2771fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x277200: 0x84430d04
    ctx->pc = 0x277200u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3332)));
    // 0x277204: 0x72102a
    ctx->pc = 0x277204u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 18)));
    // 0x277208: 0x62900a
    ctx->pc = 0x277208u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_27720c:
    // 0x27720c: 0x26310001
    ctx->pc = 0x27720cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x277210: 0x2a220004
    ctx->pc = 0x277210u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x277214: 0x1440ffee
    ctx->pc = 0x277214u;
    {
        const bool branch_taken_0x277214 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277218u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x277214) {
            ctx->pc = 0x2771D0u;
            goto label_2771d0;
        }
    }
    ctx->pc = 0x27721Cu;
    // 0x27721c: 0x3c020034
    ctx->pc = 0x27721cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277220: 0x2442fc08
    ctx->pc = 0x277220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966280));
    // 0x277224: 0x131880
    ctx->pc = 0x277224u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x277228: 0x621821
    ctx->pc = 0x277228u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27722c: 0x8c620000
    ctx->pc = 0x27722cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277230: 0x242102a
    ctx->pc = 0x277230u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x277234: 0x38420001
    ctx->pc = 0x277234u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_277238:
    // 0x277238: 0xdfbf0080
    ctx->pc = 0x277238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27723c: 0xdfb70070
    ctx->pc = 0x27723cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277240: 0xdfb60060
    ctx->pc = 0x277240u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277244: 0xdfb50050
    ctx->pc = 0x277244u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277248: 0xdfb40040
    ctx->pc = 0x277248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27724c: 0xdfb30030
    ctx->pc = 0x27724cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277250: 0xdfb20020
    ctx->pc = 0x277250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277254: 0xdfb10010
    ctx->pc = 0x277254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277258: 0xdfb00000
    ctx->pc = 0x277258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27725c: 0x3e00008
    ctx->pc = 0x27725Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277260u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2771D0u: goto label_2771d0;
            case 0x27720Cu: goto label_27720c;
            case 0x277238u: goto label_277238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277264u;
}
