#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_02__12PolyMgrClassFv
// Address: 0x2144d0 - 0x2145fc
void entryBankObj_STAT_02__12PolyMgrClassFv_0x2144d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_02__12PolyMgrClassFv");


    ctx->pc = 0x2144d0u;

    // 0x2144d0: 0x27bdffd0
    ctx->pc = 0x2144d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2144d4: 0x7fbf0020
    ctx->pc = 0x2144d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2144d8: 0x7fb10010
    ctx->pc = 0x2144d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2144dc: 0x7fb00000
    ctx->pc = 0x2144dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2144e0: 0x8c850000
    ctx->pc = 0x2144e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2144e4: 0x3c020050
    ctx->pc = 0x2144e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2144e8: 0x2443ea24
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x2144ec: 0x70808e28
    ctx->pc = 0x2144ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2144f0: 0x3c010091
    ctx->pc = 0x2144f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2144f4: 0x8f828c5c
    ctx->pc = 0x2144f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x2144f8: 0x8ca50008
    ctx->pc = 0x2144f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2144fc: 0x842419a8
    ctx->pc = 0x2144fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 6568)));
    // 0x214500: 0x52c00
    ctx->pc = 0x214500u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x214504: 0xa42825
    ctx->pc = 0x214504u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x214508: 0x52403
    ctx->pc = 0x214508u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
    // 0x21450c: 0x3084ffff
    ctx->pc = 0x21450cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x214510: 0x42100
    ctx->pc = 0x214510u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x214514: 0x641821
    ctx->pc = 0x214514u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214518: 0x8c630000
    ctx->pc = 0x214518u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21451c: 0x30a5ffff
    ctx->pc = 0x21451cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x214520: 0x52040
    ctx->pc = 0x214520u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x214524: 0x852021
    ctx->pc = 0x214524u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x214528: 0x42080
    ctx->pc = 0x214528u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x21452c: 0x10400008
    ctx->pc = 0x21452Cu;
    {
        const bool branch_taken_0x21452c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x214530u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x21452c) {
            ctx->pc = 0x214550u;
            goto label_214550;
        }
    }
    ctx->pc = 0x214534u;
    // 0x214534: 0x3c010091
    ctx->pc = 0x214534u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214538: 0x8c2219a4
    ctx->pc = 0x214538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 6564)));
    // 0x21453c: 0xc08551c
    ctx->pc = 0x21453Cu;
    SET_GPR_U32(ctx, 31, 0x214544u);
    ctx->pc = 0x214540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x215470u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPolCommonBuf__Fi_0x215470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214544u; }
        else if (ctx->pc != 0x214544u) { ctx->pc = 0x214544u; }
    }
    if (ctx->pc != 0x214544u) { return; }
    ctx->pc = 0x214544u;
    // 0x214544: 0x3c010091
    ctx->pc = 0x214544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214548: 0x10000007
    ctx->pc = 0x214548u;
    {
        const bool branch_taken_0x214548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21454Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 6520), GPR_U32(ctx, 2));
        if (branch_taken_0x214548) {
            ctx->pc = 0x214568u;
            goto label_214568;
        }
    }
    ctx->pc = 0x214550u;
label_214550:
    // 0x214550: 0x3c010091
    ctx->pc = 0x214550u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214554: 0x8c2219a4
    ctx->pc = 0x214554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 6564)));
    // 0x214558: 0xc06878c
    ctx->pc = 0x214558u;
    SET_GPR_U32(ctx, 31, 0x214560u);
    ctx->pc = 0x21455Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214560u; }
        else if (ctx->pc != 0x214560u) { ctx->pc = 0x214560u; }
    }
    if (ctx->pc != 0x214560u) { return; }
    ctx->pc = 0x214560u;
    // 0x214560: 0x3c010091
    ctx->pc = 0x214560u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214564: 0xac221978
    ctx->pc = 0x214564u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6520), GPR_U32(ctx, 2));
label_214568:
    // 0x214568: 0x3c010091
    ctx->pc = 0x214568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x21456c: 0x8c231978
    ctx->pc = 0x21456cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 6520)));
    // 0x214570: 0x8f858cf8
    ctx->pc = 0x214570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x214574: 0x24040005
    ctx->pc = 0x214574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x214578: 0x2402038e
    ctx->pc = 0x214578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 910));
    // 0x21457c: 0x3c010091
    ctx->pc = 0x21457cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214580: 0xac23197c
    ctx->pc = 0x214580u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6524), GPR_U32(ctx, 3));
    // 0x214584: 0x3c010091
    ctx->pc = 0x214584u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214588: 0x8c2319a4
    ctx->pc = 0x214588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 6564)));
    // 0x21458c: 0x8c630000
    ctx->pc = 0x21458cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214590: 0x3c010091
    ctx->pc = 0x214590u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214594: 0xa31821
    ctx->pc = 0x214594u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x214598: 0xac23199c
    ctx->pc = 0x214598u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6556), GPR_U32(ctx, 3));
    // 0x21459c: 0x3c010091
    ctx->pc = 0x21459cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2145a0: 0x8c23197c
    ctx->pc = 0x2145a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 6524)));
    // 0x2145a4: 0x3c010091
    ctx->pc = 0x2145a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2145a8: 0xac2319a0
    ctx->pc = 0x2145a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6560), GPR_U32(ctx, 3));
    // 0x2145ac: 0x8e230000
    ctx->pc = 0x2145acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2145b0: 0x3c010091
    ctx->pc = 0x2145b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2145b4: 0xac64000c
    ctx->pc = 0x2145b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2145b8: 0x8c2319a0
    ctx->pc = 0x2145b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 6560)));
    // 0x2145bc: 0xae030000
    ctx->pc = 0x2145bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2145c0: 0xa6020004
    ctx->pc = 0x2145c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2145c4: 0x3c010091
    ctx->pc = 0x2145c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2145c8: 0x8c24199c
    ctx->pc = 0x2145c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 6556)));
    // 0x2145cc: 0x3c010091
    ctx->pc = 0x2145ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2145d0: 0xc079604
    ctx->pc = 0x2145D0u;
    SET_GPR_U32(ctx, 31, 0x2145D8u);
    ctx->pc = 0x2145D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 6560)));
    ctx->pc = 0x1E5810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpandEntry_0x1e5810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145D8u; }
        else if (ctx->pc != 0x2145D8u) { ctx->pc = 0x2145D8u; }
    }
    if (ctx->pc != 0x2145D8u) { return; }
    ctx->pc = 0x2145D8u;
    // 0x2145d8: 0x8e230000
    ctx->pc = 0x2145d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2145dc: 0x24040006
    ctx->pc = 0x2145dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2145e0: 0x24020001
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2145e4: 0xac64000c
    ctx->pc = 0x2145e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2145e8: 0x7bbf0020
    ctx->pc = 0x2145e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2145ec: 0x7bb10010
    ctx->pc = 0x2145ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2145f0: 0x7bb00000
    ctx->pc = 0x2145f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2145f4: 0x3e00008
    ctx->pc = 0x2145F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2145F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214550u: goto label_214550;
            case 0x214568u: goto label_214568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2145FCu;
}
