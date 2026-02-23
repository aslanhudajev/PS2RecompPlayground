#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressButton__FiUiUiUi
// Address: 0x202230 - 0x202348
void is_PressButton__FiUiUiUi_0x202230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressButton__FiUiUiUi");


    ctx->pc = 0x202230u;

    // 0x202230: 0x27bdffa0
    ctx->pc = 0x202230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202234: 0x7fbf0050
    ctx->pc = 0x202234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x202238: 0x7fb40040
    ctx->pc = 0x202238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20223c: 0x7fb30030
    ctx->pc = 0x20223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x202240: 0x7fb20020
    ctx->pc = 0x202240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202244: 0x7fb10010
    ctx->pc = 0x202244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202248: 0x7080a628
    ctx->pc = 0x202248u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20224c: 0x7fb00000
    ctx->pc = 0x20224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202250: 0x2a810002
    ctx->pc = 0x202250u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 2));
    // 0x202254: 0x70a09e28
    ctx->pc = 0x202254u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x202258: 0x70c09628
    ctx->pc = 0x202258u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20225c: 0x70e08e28
    ctx->pc = 0x20225cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x202260: 0x10200030
    ctx->pc = 0x202260u;
    {
        const bool branch_taken_0x202260 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x202264u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x202260) {
            ctx->pc = 0x202324u;
            goto label_202324;
        }
    }
    ctx->pc = 0x202268u;
    // 0x202268: 0xc07bf9c
    ctx->pc = 0x202268u;
    SET_GPR_U32(ctx, 31, 0x202270u);
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202270u; }
        else if (ctx->pc != 0x202270u) { ctx->pc = 0x202270u; }
    }
    if (ctx->pc != 0x202270u) { return; }
    ctx->pc = 0x202270u;
    // 0x202270: 0x5040002d
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x202270) {
            ctx->pc = 0x202274u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x202328u;
            goto label_202328;
        }
    }
    ctx->pc = 0x202278u;
    // 0x202278: 0x24030003
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20227c: 0x5043001f
    ctx->pc = 0x20227Cu;
    {
        const bool branch_taken_0x20227c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20227c) {
            ctx->pc = 0x202280u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x2022FCu;
            goto label_2022fc;
        }
    }
    ctx->pc = 0x202284u;
    // 0x202284: 0x24030002
    ctx->pc = 0x202284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x202288: 0x50430011
    ctx->pc = 0x202288u;
    {
        const bool branch_taken_0x202288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x202288) {
            ctx->pc = 0x20228Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x2022D0u;
            goto label_2022d0;
        }
    }
    ctx->pc = 0x202290u;
    // 0x202290: 0x24030001
    ctx->pc = 0x202290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x202294: 0x10430003
    ctx->pc = 0x202294u;
    {
        const bool branch_taken_0x202294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x202298u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x202294) {
            ctx->pc = 0x2022A4u;
            goto label_2022a4;
        }
    }
    ctx->pc = 0x20229Cu;
    // 0x20229c: 0x10000021
    ctx->pc = 0x20229Cu;
    {
        const bool branch_taken_0x20229c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20229c) {
            ctx->pc = 0x202324u;
            goto label_202324;
        }
    }
    ctx->pc = 0x2022A4u;
label_2022a4:
    // 0x2022a4: 0x541021
    ctx->pc = 0x2022a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2022a8: 0x21080
    ctx->pc = 0x2022a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2022ac: 0x541021
    ctx->pc = 0x2022acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2022b0: 0x21840
    ctx->pc = 0x2022b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2022b4: 0x3c020050
    ctx->pc = 0x2022b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2022b8: 0x2442dc46
    ctx->pc = 0x2022b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958150));
    // 0x2022bc: 0x431021
    ctx->pc = 0x2022bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2022c0: 0x94420000
    ctx->pc = 0x2022c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2022c4: 0x2621024
    ctx->pc = 0x2022c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2022c8: 0x10000016
    ctx->pc = 0x2022C8u;
    {
        const bool branch_taken_0x2022c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2022CCu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x2022c8) {
            ctx->pc = 0x202324u;
            goto label_202324;
        }
    }
    ctx->pc = 0x2022D0u;
label_2022d0:
    // 0x2022d0: 0x541021
    ctx->pc = 0x2022d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2022d4: 0x21080
    ctx->pc = 0x2022d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2022d8: 0x541021
    ctx->pc = 0x2022d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2022dc: 0x21840
    ctx->pc = 0x2022dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2022e0: 0x3c020050
    ctx->pc = 0x2022e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2022e4: 0x2442dc46
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958150));
    // 0x2022e8: 0x431021
    ctx->pc = 0x2022e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2022ec: 0x94420000
    ctx->pc = 0x2022ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2022f0: 0x2421024
    ctx->pc = 0x2022f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2022f4: 0x1000000b
    ctx->pc = 0x2022F4u;
    {
        const bool branch_taken_0x2022f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2022F8u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x2022f4) {
            ctx->pc = 0x202324u;
            goto label_202324;
        }
    }
    ctx->pc = 0x2022FCu;
label_2022fc:
    // 0x2022fc: 0x541021
    ctx->pc = 0x2022fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x202300: 0x21080
    ctx->pc = 0x202300u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x202304: 0x541021
    ctx->pc = 0x202304u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x202308: 0x21840
    ctx->pc = 0x202308u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x20230c: 0x3c020050
    ctx->pc = 0x20230cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202310: 0x2442dc7a
    ctx->pc = 0x202310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958202));
    // 0x202314: 0x431021
    ctx->pc = 0x202314u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202318: 0x94420000
    ctx->pc = 0x202318u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20231c: 0x511024
    ctx->pc = 0x20231cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x202320: 0x2028025
    ctx->pc = 0x202320u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_202324:
    // 0x202324: 0x72001628
    ctx->pc = 0x202324u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_202328:
    // 0x202328: 0x7bbf0050
    ctx->pc = 0x202328u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20232c: 0x7bb40040
    ctx->pc = 0x20232cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202330: 0x7bb30030
    ctx->pc = 0x202330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202334: 0x7bb20020
    ctx->pc = 0x202334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202338: 0x7bb10010
    ctx->pc = 0x202338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20233c: 0x7bb00000
    ctx->pc = 0x20233cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202340: 0x3e00008
    ctx->pc = 0x202340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2022A4u: goto label_2022a4;
            case 0x2022D0u: goto label_2022d0;
            case 0x2022FCu: goto label_2022fc;
            case 0x202324u: goto label_202324;
            case 0x202328u: goto label_202328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202348u;
}
