#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_BsearchDelim
// Address: 0x1858e8 - 0x1859d4
void MPV_BsearchDelim_0x1858e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_BsearchDelim");


    ctx->pc = 0x1858e8u;

    // 0x1858e8: 0x27bdff90
    ctx->pc = 0x1858e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1858ec: 0x182d
    ctx->pc = 0x1858ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858f0: 0xffb00000
    ctx->pc = 0x1858f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1858f4: 0x80802d
    ctx->pc = 0x1858f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858f8: 0xffb10010
    ctx->pc = 0x1858f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1858fc: 0xffb40040
    ctx->pc = 0x1858fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x185900: 0x2058823
    ctx->pc = 0x185900u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x185904: 0xffbf0060
    ctx->pc = 0x185904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x185908: 0xc0a02d
    ctx->pc = 0x185908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18590c: 0xffb50050
    ctx->pc = 0x18590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x185910: 0x230102b
    ctx->pc = 0x185910u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x185914: 0xffb30030
    ctx->pc = 0x185914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x185918: 0x10400024
    ctx->pc = 0x185918u;
    {
        const bool branch_taken_0x185918 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18591Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        if (branch_taken_0x185918) {
            ctx->pc = 0x1859ACu;
            goto label_1859ac;
        }
    }
    ctx->pc = 0x185920u;
    // 0x185920: 0x24120001
    ctx->pc = 0x185920u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x185924: 0x24130002
    ctx->pc = 0x185924u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x185928: 0x24150003
    ctx->pc = 0x185928u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18592c: 0x2610ffff
    ctx->pc = 0x18592cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_185930:
    // 0x185930: 0x10720009
    ctx->pc = 0x185930u;
    {
        const bool branch_taken_0x185930 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x185934u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x185930) {
            ctx->pc = 0x185958u;
            goto label_185958;
        }
    }
    ctx->pc = 0x185938u;
    // 0x185938: 0x50600019
    ctx->pc = 0x185938u;
    {
        const bool branch_taken_0x185938 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x185938) {
            ctx->pc = 0x18593Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1859A0u;
            goto label_1859a0;
        }
    }
    ctx->pc = 0x185940u;
    // 0x185940: 0x10730008
    ctx->pc = 0x185940u;
    {
        const bool branch_taken_0x185940 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        if (branch_taken_0x185940) {
            ctx->pc = 0x185964u;
            goto label_185964;
        }
    }
    ctx->pc = 0x185948u;
    // 0x185948: 0x1075000a
    ctx->pc = 0x185948u;
    {
        const bool branch_taken_0x185948 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 21));
        if (branch_taken_0x185948) {
            ctx->pc = 0x185974u;
            goto label_185974;
        }
    }
    ctx->pc = 0x185950u;
    // 0x185950: 0x10000014
    ctx->pc = 0x185950u;
    {
        const bool branch_taken_0x185950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185954u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x185950) {
            ctx->pc = 0x1859A4u;
            goto label_1859a4;
        }
    }
    ctx->pc = 0x185958u;
label_185958:
    // 0x185958: 0x38420001
    ctx->pc = 0x185958u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x18595c: 0x10000010
    ctx->pc = 0x18595Cu;
    {
        const bool branch_taken_0x18595c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185960u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 19));
        if (branch_taken_0x18595c) {
            ctx->pc = 0x1859A0u;
            goto label_1859a0;
        }
    }
    ctx->pc = 0x185964u;
label_185964:
    // 0x185964: 0x1440000d
    ctx->pc = 0x185964u;
    {
        const bool branch_taken_0x185964 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185968u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x185964) {
            ctx->pc = 0x18599Cu;
            goto label_18599c;
        }
    }
    ctx->pc = 0x18596Cu;
    // 0x18596c: 0x1000000c
    ctx->pc = 0x18596Cu;
    {
        const bool branch_taken_0x18596c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185970u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x18596c) {
            ctx->pc = 0x1859A0u;
            goto label_1859a0;
        }
    }
    ctx->pc = 0x185974u;
label_185974:
    // 0x185974: 0x14400008
    ctx->pc = 0x185974u;
    {
        const bool branch_taken_0x185974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185978u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x185974) {
            ctx->pc = 0x185998u;
            goto label_185998;
        }
    }
    ctx->pc = 0x18597Cu;
    // 0x18597c: 0xc061610
    ctx->pc = 0x18597Cu;
    SET_GPR_U32(ctx, 31, 0x185984u);
    ctx->pc = 0x185980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185984u; }
        else if (ctx->pc != 0x185984u) { ctx->pc = 0x185984u; }
    }
    if (ctx->pc != 0x185984u) { return; }
    ctx->pc = 0x185984u;
    // 0x185984: 0x2821024
    ctx->pc = 0x185984u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x185988: 0x14400009
    ctx->pc = 0x185988u;
    {
        const bool branch_taken_0x185988 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18598Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185988) {
            ctx->pc = 0x1859B0u;
            goto label_1859b0;
        }
    }
    ctx->pc = 0x185990u;
    // 0x185990: 0x10000003
    ctx->pc = 0x185990u;
    {
        const bool branch_taken_0x185990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185994u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185990) {
            ctx->pc = 0x1859A0u;
            goto label_1859a0;
        }
    }
    ctx->pc = 0x185998u;
label_185998:
    // 0x185998: 0x24030002
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_18599c:
    // 0x18599c: 0x242180b
    ctx->pc = 0x18599cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 18));
label_1859a0:
    // 0x1859a0: 0x230102b
    ctx->pc = 0x1859a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1859a4:
    // 0x1859a4: 0x1440ffe2
    ctx->pc = 0x1859A4u;
    {
        const bool branch_taken_0x1859a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1859A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x1859a4) {
            ctx->pc = 0x185930u;
            goto label_185930;
        }
    }
    ctx->pc = 0x1859ACu;
label_1859ac:
    // 0x1859ac: 0x102d
    ctx->pc = 0x1859acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1859b0:
    // 0x1859b0: 0xdfbf0060
    ctx->pc = 0x1859b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1859b4: 0xdfb50050
    ctx->pc = 0x1859b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1859b8: 0xdfb40040
    ctx->pc = 0x1859b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1859bc: 0xdfb30030
    ctx->pc = 0x1859bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1859c0: 0xdfb20020
    ctx->pc = 0x1859c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1859c4: 0xdfb10010
    ctx->pc = 0x1859c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1859c8: 0xdfb00000
    ctx->pc = 0x1859c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1859cc: 0x3e00008
    ctx->pc = 0x1859CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1859D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185930u: goto label_185930;
            case 0x185958u: goto label_185958;
            case 0x185964u: goto label_185964;
            case 0x185974u: goto label_185974;
            case 0x185998u: goto label_185998;
            case 0x18599Cu: goto label_18599c;
            case 0x1859A0u: goto label_1859a0;
            case 0x1859A4u: goto label_1859a4;
            case 0x1859ACu: goto label_1859ac;
            case 0x1859B0u: goto label_1859b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1859D4u;
}
