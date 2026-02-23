#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: analysis_flist
// Address: 0x1794e0 - 0x17961c
void analysis_flist_0x1794e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("analysis_flist");


    ctx->pc = 0x1794e0u;

    // 0x1794e0: 0x27bdff80
    ctx->pc = 0x1794e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1794e4: 0xffb50050
    ctx->pc = 0x1794e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1794e8: 0xffb40040
    ctx->pc = 0x1794e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1794ec: 0x80a82d
    ctx->pc = 0x1794ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794f0: 0xffb30030
    ctx->pc = 0x1794f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1794f4: 0xe0a02d
    ctx->pc = 0x1794f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794f8: 0xffb20020
    ctx->pc = 0x1794f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1794fc: 0xc0982d
    ctx->pc = 0x1794fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179500: 0xffb10010
    ctx->pc = 0x179500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x179504: 0x382d
    ctx->pc = 0x179504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179508: 0xffb00000
    ctx->pc = 0x179508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17950c: 0x882d
    ctx->pc = 0x17950cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179510: 0xffbf0070
    ctx->pc = 0x179510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x179514: 0xa0802d
    ctx->pc = 0x179514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179518: 0xffb60060
    ctx->pc = 0x179518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x17951c: 0x82020000
    ctx->pc = 0x17951cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179520: 0x1040002b
    ctx->pc = 0x179520u;
    {
        const bool branch_taken_0x179520 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x179524u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179520) {
            ctx->pc = 0x1795D0u;
            goto label_1795d0;
        }
    }
    ctx->pc = 0x179528u;
    // 0x179528: 0x200202d
    ctx->pc = 0x179528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17952c: 0x3c160024
    ctx->pc = 0x17952cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
    // 0x179530: 0x80830000
    ctx->pc = 0x179530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179534: 0x2402005c
    ctx->pc = 0x179534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
label_179538:
    // 0x179538: 0x14620004
    ctx->pc = 0x179538u;
    {
        const bool branch_taken_0x179538 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17953Cu;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x179538) {
            ctx->pc = 0x17954Cu;
            goto label_17954c;
        }
    }
    ctx->pc = 0x179540u;
    // 0x179540: 0x2402002f
    ctx->pc = 0x179540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x179544: 0x2405002f
    ctx->pc = 0x179544u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x179548: 0xa0820000
    ctx->pc = 0x179548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_17954c:
    // 0x17954c: 0x51600
    ctx->pc = 0x17954cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
    // 0x179550: 0x2403000a
    ctx->pc = 0x179550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x179554: 0x21603
    ctx->pc = 0x179554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x179558: 0x50430004
    ctx->pc = 0x179558u;
    {
        const bool branch_taken_0x179558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x179558) {
            ctx->pc = 0x17955Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
            ctx->pc = 0x17956Cu;
            goto label_17956c;
        }
    }
    ctx->pc = 0x179560u;
    // 0x179560: 0x14400013
    ctx->pc = 0x179560u;
    {
        const bool branch_taken_0x179560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x179564u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x179560) {
            ctx->pc = 0x1795B0u;
            goto label_1795b0;
        }
    }
    ctx->pc = 0x179568u;
    // 0x179568: 0x8083ffff
    ctx->pc = 0x179568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
label_17956c:
    // 0x17956c: 0x2402000d
    ctx->pc = 0x17956cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x179570: 0x14620002
    ctx->pc = 0x179570u;
    {
        const bool branch_taken_0x179570 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x179574u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        if (branch_taken_0x179570) {
            ctx->pc = 0x17957Cu;
            goto label_17957c;
        }
    }
    ctx->pc = 0x179578u;
    // 0x179578: 0xa080ffff
    ctx->pc = 0x179578u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_17957c:
    // 0x17957c: 0x2921818
    ctx->pc = 0x17957cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x179580: 0x1320c0
    ctx->pc = 0x179580u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 3));
    // 0x179584: 0x2072821
    ctx->pc = 0x179584u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x179588: 0x721021
    ctx->pc = 0x179588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x17958c: 0x822021
    ctx->pc = 0x17958cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x179590: 0x26520001
    ctx->pc = 0x179590u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x179594: 0xc050c90
    ctx->pc = 0x179594u;
    SET_GPR_U32(ctx, 31, 0x17959Cu);
    ctx->pc = 0x179598u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17959Cu; }
        else if (ctx->pc != 0x17959Cu) { ctx->pc = 0x17959Cu; }
    }
    if (ctx->pc != 0x17959Cu) { return; }
    ctx->pc = 0x17959Cu;
    // 0x17959c: 0x26220001
    ctx->pc = 0x17959cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1795a0: 0x1253000c
    ctx->pc = 0x1795A0u;
    {
        const bool branch_taken_0x1795a0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 19));
        ctx->pc = 0x1795A4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1795a0) {
            ctx->pc = 0x1795D4u;
            goto label_1795d4;
        }
    }
    ctx->pc = 0x1795A8u;
    // 0x1795a8: 0x10000002
    ctx->pc = 0x1795A8u;
    {
        const bool branch_taken_0x1795a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1795ACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1795a8) {
            ctx->pc = 0x1795B4u;
            goto label_1795b4;
        }
    }
    ctx->pc = 0x1795B0u;
label_1795b0:
    // 0x1795b0: 0x40882d
    ctx->pc = 0x1795b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1795b4:
    // 0x1795b4: 0x2111021
    ctx->pc = 0x1795b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1795b8: 0x40202d
    ctx->pc = 0x1795b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795bc: 0x80830000
    ctx->pc = 0x1795bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1795c0: 0x1460ffdd
    ctx->pc = 0x1795C0u;
    {
        const bool branch_taken_0x1795c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1795C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x1795c0) {
            ctx->pc = 0x179538u;
            goto label_179538;
        }
    }
    ctx->pc = 0x1795C8u;
    // 0x1795c8: 0x10000003
    ctx->pc = 0x1795C8u;
    {
        const bool branch_taken_0x1795c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1795CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294943784)));
        if (branch_taken_0x1795c8) {
            ctx->pc = 0x1795D8u;
            goto label_1795d8;
        }
    }
    ctx->pc = 0x1795D0u;
label_1795d0:
    // 0x1795d0: 0x3c160024
    ctx->pc = 0x1795d0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
label_1795d4:
    // 0x1795d4: 0x8ec2a428
    ctx->pc = 0x1795d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294943784)));
label_1795d8:
    // 0x1795d8: 0x14400005
    ctx->pc = 0x1795D8u;
    {
        const bool branch_taken_0x1795d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1795DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 22), 4294943784));
        if (branch_taken_0x1795d8) {
            ctx->pc = 0x1795F0u;
            goto label_1795f0;
        }
    }
    ctx->pc = 0x1795E0u;
    // 0x1795e0: 0xaed5a428
    ctx->pc = 0x1795e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294943784), GPR_U32(ctx, 21));
    // 0x1795e4: 0xac74000c
    ctx->pc = 0x1795e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 20));
    // 0x1795e8: 0xac730008
    ctx->pc = 0x1795e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1795ec: 0xac720004
    ctx->pc = 0x1795ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_1795f0:
    // 0x1795f0: 0x240102d
    ctx->pc = 0x1795f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795f4: 0xdfbf0070
    ctx->pc = 0x1795f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1795f8: 0xdfb60060
    ctx->pc = 0x1795f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1795fc: 0xdfb50050
    ctx->pc = 0x1795fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179600: 0xdfb40040
    ctx->pc = 0x179600u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179604: 0xdfb30030
    ctx->pc = 0x179604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179608: 0xdfb20020
    ctx->pc = 0x179608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17960c: 0xdfb10010
    ctx->pc = 0x17960cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179610: 0xdfb00000
    ctx->pc = 0x179610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179614: 0x3e00008
    ctx->pc = 0x179614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179618u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179538u: goto label_179538;
            case 0x17954Cu: goto label_17954c;
            case 0x17956Cu: goto label_17956c;
            case 0x17957Cu: goto label_17957c;
            case 0x1795B0u: goto label_1795b0;
            case 0x1795B4u: goto label_1795b4;
            case 0x1795D0u: goto label_1795d0;
            case 0x1795D4u: goto label_1795d4;
            case 0x1795D8u: goto label_1795d8;
            case 0x1795F0u: goto label_1795f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17961Cu;
}
