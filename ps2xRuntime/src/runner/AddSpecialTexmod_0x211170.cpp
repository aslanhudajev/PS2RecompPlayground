#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddSpecialTexmod
// Address: 0x211170 - 0x2112c4
void AddSpecialTexmod_0x211170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211170u;

    // 0x211170: 0x27bdff90
    ctx->pc = 0x211170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x211174: 0xffbf0060
    ctx->pc = 0x211174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x211178: 0xffb50050
    ctx->pc = 0x211178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21117c: 0xffb40040
    ctx->pc = 0x21117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x211180: 0xffb30030
    ctx->pc = 0x211180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x211184: 0xffb20020
    ctx->pc = 0x211184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211188: 0xffb10010
    ctx->pc = 0x211188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21118c: 0xffb00000
    ctx->pc = 0x21118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211190: 0x80502d
    ctx->pc = 0x211190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211194: 0xa0202d
    ctx->pc = 0x211194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211198: 0xc0902d
    ctx->pc = 0x211198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21119c: 0xe0982d
    ctx->pc = 0x21119cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111a0: 0x100a02d
    ctx->pc = 0x2111a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111a4: 0x120a82d
    ctx->pc = 0x2111a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111a8: 0x3c02003c
    ctx->pc = 0x2111a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2111ac: 0x8c42c9a8
    ctx->pc = 0x2111acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x2111b0: 0x18400017
    ctx->pc = 0x2111B0u;
    {
        const bool branch_taken_0x2111b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2111B4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2111b0) {
            ctx->pc = 0x211210u;
            goto label_211210;
        }
    }
    ctx->pc = 0x2111B8u;
    // 0x2111b8: 0x3c02003c
    ctx->pc = 0x2111b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2111bc: 0x8c42c9f4
    ctx->pc = 0x2111bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953460)));
    // 0x2111c0: 0x440000e
    ctx->pc = 0x2111C0u;
    {
        const bool branch_taken_0x2111c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2111C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2111c0) {
            ctx->pc = 0x2111FCu;
            goto label_2111fc;
        }
    }
    ctx->pc = 0x2111C8u;
    // 0x2111c8: 0x8c43c9a8
    ctx->pc = 0x2111c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x2111cc: 0x24060058
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 88));
    // 0x2111d0: 0x3c02003c
    ctx->pc = 0x2111d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2111d4: 0x2447c9f4
    ctx->pc = 0x2111d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294953460));
    // 0x2111d8: 0x26310001
    ctx->pc = 0x2111d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2111dc: 0x0
    ctx->pc = 0x2111dcu;
    // NOP
label_2111e0:
    // 0x2111e0: 0x223102a
    ctx->pc = 0x2111e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x2111e4: 0x1040000a
    ctx->pc = 0x2111E4u;
    {
        const bool branch_taken_0x2111e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2111E8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2111e4) {
            ctx->pc = 0x211210u;
            goto label_211210;
        }
    }
    ctx->pc = 0x2111ECu;
    // 0x2111ec: 0xa71021
    ctx->pc = 0x2111ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2111f0: 0x8c420000
    ctx->pc = 0x2111f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2111f4: 0x443fffa
    ctx->pc = 0x2111F4u;
    {
        const bool branch_taken_0x2111f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2111f4) {
            ctx->pc = 0x2111F8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2111E0u;
            goto label_2111e0;
        }
    }
    ctx->pc = 0x2111FCu;
label_2111fc:
    // 0x2111fc: 0x3c02003c
    ctx->pc = 0x2111fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x211200: 0x8c42c9a8
    ctx->pc = 0x211200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x211204: 0x222102a
    ctx->pc = 0x211204u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x211208: 0x1440000f
    ctx->pc = 0x211208u;
    {
        const bool branch_taken_0x211208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21120Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 88));
        if (branch_taken_0x211208) {
            ctx->pc = 0x211248u;
            goto label_211248;
        }
    }
    ctx->pc = 0x211210u;
label_211210:
    // 0x211210: 0x3c02003c
    ctx->pc = 0x211210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x211214: 0x8c45c9a8
    ctx->pc = 0x211214u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x211218: 0x28a20005
    ctx->pc = 0x211218u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 5));
    // 0x21121c: 0x14400006
    ctx->pc = 0x21121Cu;
    {
        const bool branch_taken_0x21121c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211220u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x21121c) {
            ctx->pc = 0x211238u;
            goto label_211238;
        }
    }
    ctx->pc = 0x211224u;
    // 0x211224: 0x3c04003a
    ctx->pc = 0x211224u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211228: 0xc0b492e
    ctx->pc = 0x211228u;
    SET_GPR_U32(ctx, 31, 0x211230u);
    ctx->pc = 0x21122Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22704));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211230u; }
    }
    if (ctx->pc != 0x211230u) { return; }
    ctx->pc = 0x211230u;
    // 0x211230: 0x1000001b
    ctx->pc = 0x211230u;
    {
        const bool branch_taken_0x211230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211234u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x211230) {
            ctx->pc = 0x2112A0u;
            goto label_2112a0;
        }
    }
    ctx->pc = 0x211238u;
label_211238:
    // 0x211238: 0x8c71c9a8
    ctx->pc = 0x211238u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 4294953384)));
    // 0x21123c: 0x26220001
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x211240: 0xac62c9a8
    ctx->pc = 0x211240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953384), GPR_U32(ctx, 2));
    // 0x211244: 0x24100058
    ctx->pc = 0x211244u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 88));
label_211248:
    // 0x211248: 0x2308018
    ctx->pc = 0x211248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21124c: 0x3c02003c
    ctx->pc = 0x21124cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x211250: 0x2442c9b0
    ctx->pc = 0x211250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953392));
    // 0x211254: 0x2028021
    ctx->pc = 0x211254u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211258: 0x282d
    ctx->pc = 0x211258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21125c: 0x140302d
    ctx->pc = 0x21125cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211260: 0x140382d
    ctx->pc = 0x211260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211264: 0xc0b1b56
    ctx->pc = 0x211264u;
    SET_GPR_U32(ctx, 31, 0x21126Cu);
    ctx->pc = 0x211268u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21126Cu; }
    }
    if (ctx->pc != 0x21126Cu) { return; }
    ctx->pc = 0x21126Cu;
    // 0x21126c: 0xae020044
    ctx->pc = 0x21126cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x211270: 0x260202d
    ctx->pc = 0x211270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211274: 0x282d
    ctx->pc = 0x211274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211278: 0x240302d
    ctx->pc = 0x211278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21127c: 0x240382d
    ctx->pc = 0x21127cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211280: 0xc0b1b56
    ctx->pc = 0x211280u;
    SET_GPR_U32(ctx, 31, 0x211288u);
    ctx->pc = 0x211284u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211288u; }
    }
    if (ctx->pc != 0x211288u) { return; }
    ctx->pc = 0x211288u;
    // 0x211288: 0xae020048
    ctx->pc = 0x211288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x21128c: 0xa614004c
    ctx->pc = 0x21128cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 20));
    // 0x211290: 0xa600004e
    ctx->pc = 0x211290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 0));
    // 0x211294: 0xae150050
    ctx->pc = 0x211294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x211298: 0xae000054
    ctx->pc = 0x211298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x21129c: 0x220102d
    ctx->pc = 0x21129cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2112a0:
    // 0x2112a0: 0xdfbf0060
    ctx->pc = 0x2112a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2112a4: 0xdfb50050
    ctx->pc = 0x2112a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2112a8: 0xdfb40040
    ctx->pc = 0x2112a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2112ac: 0xdfb30030
    ctx->pc = 0x2112acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2112b0: 0xdfb20020
    ctx->pc = 0x2112b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2112b4: 0xdfb10010
    ctx->pc = 0x2112b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2112b8: 0xdfb00000
    ctx->pc = 0x2112b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112bc: 0x3e00008
    ctx->pc = 0x2112BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2111E0u: goto label_2111e0;
            case 0x2111FCu: goto label_2111fc;
            case 0x211210u: goto label_211210;
            case 0x211238u: goto label_211238;
            case 0x211248u: goto label_211248;
            case 0x2112A0u: goto label_2112a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2112C4u;
}
