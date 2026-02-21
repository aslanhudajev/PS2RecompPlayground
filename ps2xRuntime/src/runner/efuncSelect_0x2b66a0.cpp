#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncSelect
// Address: 0x2b66a0 - 0x2b67b4
void efuncSelect_0x2b66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b66a0u;

    // 0x2b66a0: 0x27bdffc0
    ctx->pc = 0x2b66a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b66a4: 0xffbf0030
    ctx->pc = 0x2b66a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b66a8: 0xffb20020
    ctx->pc = 0x2b66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b66ac: 0xffb10010
    ctx->pc = 0x2b66acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b66b0: 0xffb00000
    ctx->pc = 0x2b66b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b66b4: 0x80802d
    ctx->pc = 0x2b66b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b66b8: 0x8e120000
    ctx->pc = 0x2b66b8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b66bc: 0x8e110010
    ctx->pc = 0x2b66bcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b66c0: 0xc0ad1a2
    ctx->pc = 0x2B66C0u;
    SET_GPR_U32(ctx, 31, 0x2B66C8u);
    ctx->pc = 0x2B66C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B66C8u; }
    }
    if (ctx->pc != 0x2B66C8u) { return; }
    ctx->pc = 0x2B66C8u;
    // 0x2b66c8: 0x40182d
    ctx->pc = 0x2b66c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b66cc: 0x58600007
    ctx->pc = 0x2B66CCu;
    {
        const bool branch_taken_0x2b66cc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2b66cc) {
            ctx->pc = 0x2B66D0u;
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2B66ECu;
            goto label_2b66ec;
        }
    }
    ctx->pc = 0x2B66D4u;
    // 0x2b66d4: 0x8e02000c
    ctx->pc = 0x2b66d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b66d8: 0x2442fffe
    ctx->pc = 0x2b66d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2b66dc: 0x62102a
    ctx->pc = 0x2b66dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2b66e0: 0x14400017
    ctx->pc = 0x2B66E0u;
    {
        const bool branch_taken_0x2b66e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B66E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x2b66e0) {
            ctx->pc = 0x2B6740u;
            goto label_2b6740;
        }
    }
    ctx->pc = 0x2B66E8u;
    // 0x2b66e8: 0x240182d
    ctx->pc = 0x2b66e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b66ec:
    // 0x2b66ec: 0x26220050
    ctx->pc = 0x2b66ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 80));
    // 0x2b66f0: 0x26240090
    ctx->pc = 0x2b66f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 144));
label_2b66f4:
    // 0x2b66f4: 0xdc450000
    ctx->pc = 0x2b66f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b66f8: 0xdc460008
    ctx->pc = 0x2b66f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b66fc: 0xdc470010
    ctx->pc = 0x2b66fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6700: 0xdc480018
    ctx->pc = 0x2b6700u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6704: 0xfc650000
    ctx->pc = 0x2b6704u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2b6708: 0xfc660008
    ctx->pc = 0x2b6708u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2b670c: 0xfc670010
    ctx->pc = 0x2b670cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2b6710: 0xfc680018
    ctx->pc = 0x2b6710u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2b6714: 0x24420020
    ctx->pc = 0x2b6714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b6718: 0x24630020
    ctx->pc = 0x2b6718u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b671c: 0x0
    ctx->pc = 0x2b671cu;
    // NOP
    // 0x2b6720: 0x0
    ctx->pc = 0x2b6720u;
    // NOP
    // 0x2b6724: 0x1444fff3
    ctx->pc = 0x2B6724u;
    {
        const bool branch_taken_0x2b6724 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2b6724) {
            ctx->pc = 0x2B66F4u;
            goto label_2b66f4;
        }
    }
    ctx->pc = 0x2B672Cu;
    // 0x2b672c: 0xdc440000
    ctx->pc = 0x2b672cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6730: 0xdc450008
    ctx->pc = 0x2b6730u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6734: 0xfc640000
    ctx->pc = 0x2b6734u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2b6738: 0x10000018
    ctx->pc = 0x2B6738u;
    {
        const bool branch_taken_0x2b6738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B673Cu;
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
        if (branch_taken_0x2b6738) {
            ctx->pc = 0x2B679Cu;
            goto label_2b679c;
        }
    }
    ctx->pc = 0x2B6740u;
label_2b6740:
    // 0x2b6740: 0x622018
    ctx->pc = 0x2b6740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b6744: 0x911021
    ctx->pc = 0x2b6744u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2b6748: 0x240282d
    ctx->pc = 0x2b6748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b674c: 0x24430050
    ctx->pc = 0x2b674cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b6750: 0x24420090
    ctx->pc = 0x2b6750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 144));
label_2b6754:
    // 0x2b6754: 0xdc660000
    ctx->pc = 0x2b6754u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6758: 0xdc670008
    ctx->pc = 0x2b6758u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b675c: 0xdc680010
    ctx->pc = 0x2b675cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b6760: 0xdc640018
    ctx->pc = 0x2b6760u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b6764: 0xfca60000
    ctx->pc = 0x2b6764u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x2b6768: 0xfca70008
    ctx->pc = 0x2b6768u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x2b676c: 0xfca80010
    ctx->pc = 0x2b676cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x2b6770: 0xfca40018
    ctx->pc = 0x2b6770u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x2b6774: 0x24630020
    ctx->pc = 0x2b6774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b6778: 0x24a50020
    ctx->pc = 0x2b6778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2b677c: 0x0
    ctx->pc = 0x2b677cu;
    // NOP
    // 0x2b6780: 0x0
    ctx->pc = 0x2b6780u;
    // NOP
    // 0x2b6784: 0x1462fff3
    ctx->pc = 0x2B6784u;
    {
        const bool branch_taken_0x2b6784 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b6784) {
            ctx->pc = 0x2B6754u;
            goto label_2b6754;
        }
    }
    ctx->pc = 0x2B678Cu;
    // 0x2b678c: 0xdc660000
    ctx->pc = 0x2b678cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6790: 0xdc670008
    ctx->pc = 0x2b6790u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b6794: 0xfca60000
    ctx->pc = 0x2b6794u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x2b6798: 0xfca70008
    ctx->pc = 0x2b6798u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
label_2b679c:
    // 0x2b679c: 0xdfbf0030
    ctx->pc = 0x2b679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b67a0: 0xdfb20020
    ctx->pc = 0x2b67a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b67a4: 0xdfb10010
    ctx->pc = 0x2b67a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b67a8: 0xdfb00000
    ctx->pc = 0x2b67a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b67ac: 0x3e00008
    ctx->pc = 0x2B67ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B67B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B66ECu: goto label_2b66ec;
            case 0x2B66F4u: goto label_2b66f4;
            case 0x2B6740u: goto label_2b6740;
            case 0x2B6754u: goto label_2b6754;
            case 0x2B679Cu: goto label_2b679c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B67B4u;
}
