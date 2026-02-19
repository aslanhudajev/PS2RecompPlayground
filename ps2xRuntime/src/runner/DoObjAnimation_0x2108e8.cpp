#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoObjAnimation
// Address: 0x2108e8 - 0x2109a4
void DoObjAnimation_0x2108e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2108e8u;

    // 0x2108e8: 0x27bdffc0
    ctx->pc = 0x2108e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2108ec: 0xffbf0030
    ctx->pc = 0x2108ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2108f0: 0xffb20020
    ctx->pc = 0x2108f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2108f4: 0xffb10010
    ctx->pc = 0x2108f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2108f8: 0xffb00000
    ctx->pc = 0x2108f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2108fc: 0xa0902d
    ctx->pc = 0x2108fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210900: 0x24020028
    ctx->pc = 0x210900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x210904: 0xc21818
    ctx->pc = 0x210904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x210908: 0x648021
    ctx->pc = 0x210908u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21090c: 0x8e020020
    ctx->pc = 0x21090cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x210910: 0x441000a
    ctx->pc = 0x210910u;
    {
        const bool branch_taken_0x210910 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x210914u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210910) {
            ctx->pc = 0x21093Cu;
            goto label_21093c;
        }
    }
    ctx->pc = 0x210918u;
    // 0x210918: 0x240202d
    ctx->pc = 0x210918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21091c: 0x24050001
    ctx->pc = 0x21091cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210920: 0x302d
    ctx->pc = 0x210920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210924: 0xdfbf0030
    ctx->pc = 0x210924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210928: 0xdfb20020
    ctx->pc = 0x210928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21092c: 0xdfb10010
    ctx->pc = 0x21092cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210930: 0xdfb00000
    ctx->pc = 0x210930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210934: 0x80b41b8
    ctx->pc = 0x210934u;
    ctx->pc = 0x210938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D06E0u;
    MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime); return;
    ctx->pc = 0x21093Cu;
label_21093c:
    // 0x21093c: 0x240202d
    ctx->pc = 0x21093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210940: 0x24050001
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210944: 0xc0b41e4
    ctx->pc = 0x210944u;
    SET_GPR_U32(ctx, 31, 0x21094Cu);
    ctx->pc = 0x210948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21094Cu; }
    }
    if (ctx->pc != 0x21094Cu) { return; }
    ctx->pc = 0x21094Cu;
    // 0x21094c: 0x86040026
    ctx->pc = 0x21094cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x210950: 0x86020024
    ctx->pc = 0x210950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x210954: 0x821821
    ctx->pc = 0x210954u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210958: 0x224102a
    ctx->pc = 0x210958u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 4)));
    // 0x21095c: 0x14400004
    ctx->pc = 0x21095Cu;
    {
        const bool branch_taken_0x21095c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x210960u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x21095c) {
            ctx->pc = 0x210970u;
            goto label_210970;
        }
    }
    ctx->pc = 0x210964u;
    // 0x210964: 0x71102a
    ctx->pc = 0x210964u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x210968: 0x50400005
    ctx->pc = 0x210968u;
    {
        const bool branch_taken_0x210968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x210968) {
            ctx->pc = 0x21096Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->pc = 0x210980u;
            goto label_210980;
        }
    }
    ctx->pc = 0x210970u;
label_210970:
    // 0x210970: 0x14830005
    ctx->pc = 0x210970u;
    {
        const bool branch_taken_0x210970 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x210974u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210970) {
            ctx->pc = 0x210988u;
            goto label_210988;
        }
    }
    ctx->pc = 0x210978u;
    // 0x210978: 0x10000003
    ctx->pc = 0x210978u;
    {
        const bool branch_taken_0x210978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21097Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        if (branch_taken_0x210978) {
            ctx->pc = 0x210988u;
            goto label_210988;
        }
    }
    ctx->pc = 0x210980u;
label_210980:
    // 0x210980: 0x2222821
    ctx->pc = 0x210980u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x210984: 0xa42823
    ctx->pc = 0x210984u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_210988:
    // 0x210988: 0x240202d
    ctx->pc = 0x210988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21098c: 0xdfbf0030
    ctx->pc = 0x21098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210990: 0xdfb20020
    ctx->pc = 0x210990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210994: 0xdfb10010
    ctx->pc = 0x210994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210998: 0xdfb00000
    ctx->pc = 0x210998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21099c: 0x80b220e
    ctx->pc = 0x21099Cu;
    ctx->pc = 0x2109A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C8838u;
    MBSetObject_0x2c8838(rdram, ctx, runtime); return;
    ctx->pc = 0x2109A4u;
}
