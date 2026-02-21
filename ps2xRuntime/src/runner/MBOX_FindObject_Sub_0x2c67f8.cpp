#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_FindObject_Sub
// Address: 0x2c67f8 - 0x2c6a38
void MBOX_FindObject_Sub_0x2c67f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c67f8u;

    // 0x2c67f8: 0x27bdff60
    ctx->pc = 0x2c67f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c67fc: 0xffbf0090
    ctx->pc = 0x2c67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c6800: 0xffb60080
    ctx->pc = 0x2c6800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2c6804: 0xffb50070
    ctx->pc = 0x2c6804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2c6808: 0xffb40060
    ctx->pc = 0x2c6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2c680c: 0xffb30050
    ctx->pc = 0x2c680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2c6810: 0xffb20040
    ctx->pc = 0x2c6810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2c6814: 0xffb10030
    ctx->pc = 0x2c6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2c6818: 0xffb00020
    ctx->pc = 0x2c6818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2c681c: 0x80a02d
    ctx->pc = 0x2c681cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6820: 0xc0882d
    ctx->pc = 0x2c6820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6824: 0xe0b02d
    ctx->pc = 0x2c6824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6828: 0x3c020036
    ctx->pc = 0x2c6828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c682c: 0x8c53dee0
    ctx->pc = 0x2c682cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c6830: 0x902d
    ctx->pc = 0x2c6830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6834: 0x2402ffff
    ctx->pc = 0x2c6834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6838: 0x45102a
    ctx->pc = 0x2c6838u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x2c683c: 0x802d
    ctx->pc = 0x2c683cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6840: 0x6200006
    ctx->pc = 0x2C6840u;
    {
        const bool branch_taken_0x2c6840 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2C6844u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 5));
        if (branch_taken_0x2c6840) {
            ctx->pc = 0x2C685Cu;
            goto label_2c685c;
        }
    }
    ctx->pc = 0x2C6848u;
    // 0x2c6848: 0x3c020038
    ctx->pc = 0x2c6848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c684c: 0x8c42c500
    ctx->pc = 0x2c684cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6850: 0x222102a
    ctx->pc = 0x2c6850u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2c6854: 0x14400004
    ctx->pc = 0x2C6854u;
    {
        const bool branch_taken_0x2c6854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6854) {
            ctx->pc = 0x2C6868u;
            goto label_2c6868;
        }
    }
    ctx->pc = 0x2C685Cu;
label_2c685c:
    // 0x2c685c: 0x3c020038
    ctx->pc = 0x2c685cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6860: 0x8c42c500
    ctx->pc = 0x2c6860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6864: 0x2451ffff
    ctx->pc = 0x2c6864u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c6868:
    // 0x2c6868: 0x12800005
    ctx->pc = 0x2C6868u;
    {
        const bool branch_taken_0x2c6868 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C686Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2c6868) {
            ctx->pc = 0x2C6880u;
            goto label_2c6880;
        }
    }
    ctx->pc = 0x2C6870u;
    // 0x2c6870: 0x82820000
    ctx->pc = 0x2c6870u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c6874: 0x1440000a
    ctx->pc = 0x2C6874u;
    {
        const bool branch_taken_0x2c6874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6878u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6874) {
            ctx->pc = 0x2C68A0u;
            goto label_2c68a0;
        }
    }
    ctx->pc = 0x2C687Cu;
    // 0x2c687c: 0x3c02003b
    ctx->pc = 0x2c687cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2c6880:
    // 0x2c6880: 0x24436ff0
    ctx->pc = 0x2c6880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 28656));
    // 0x2c6884: 0xdc426ff0
    ctx->pc = 0x2c6884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 28656)));
    // 0x2c6888: 0xffa20000
    ctx->pc = 0x2c6888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2c688c: 0x94620008
    ctx->pc = 0x2c688cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c6890: 0xa7a20008
    ctx->pc = 0x2c6890u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6894: 0x9062000a
    ctx->pc = 0x2c6894u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2c6898: 0x10000004
    ctx->pc = 0x2C6898u;
    {
        const bool branch_taken_0x2c6898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C689Cu;
        WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2c6898) {
            ctx->pc = 0x2C68ACu;
            goto label_2c68ac;
        }
    }
    ctx->pc = 0x2C68A0u;
label_2c68a0:
    // 0x2c68a0: 0x280282d
    ctx->pc = 0x2c68a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68a4: 0xc0bf42e
    ctx->pc = 0x2C68A4u;
    SET_GPR_U32(ctx, 31, 0x2C68ACu);
    ctx->pc = 0x2C68A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C68ACu; }
    }
    if (ctx->pc != 0x2C68ACu) { return; }
    ctx->pc = 0x2C68ACu;
label_2c68ac:
    // 0x2c68ac: 0x230102a
    ctx->pc = 0x2c68acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x2c68b0: 0x14400017
    ctx->pc = 0x2C68B0u;
    {
        const bool branch_taken_0x2c68b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c68b0) {
            ctx->pc = 0x2C6910u;
            goto label_2c6910;
        }
    }
    ctx->pc = 0x2C68B8u;
    // 0x2c68b8: 0x3c15002c
    ctx->pc = 0x2c68b8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)44 << 16));
    // 0x2c68bc: 0x8e630038
    ctx->pc = 0x2c68bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_2c68c0:
    // 0x2c68c0: 0x102100
    ctx->pc = 0x2c68c0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c68c4: 0x641021
    ctx->pc = 0x2c68c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c68c8: 0x8c420010
    ctx->pc = 0x2c68c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c68cc: 0x5440000d
    ctx->pc = 0x2C68CCu;
    {
        const bool branch_taken_0x2c68cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c68cc) {
            ctx->pc = 0x2C68D0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2C6904u;
            goto label_2c6904;
        }
    }
    ctx->pc = 0x2C68D4u;
    // 0x2c68d4: 0x641021
    ctx->pc = 0x2c68d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c68d8: 0x8c420004
    ctx->pc = 0x2c68d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c68dc: 0x3a0202d
    ctx->pc = 0x2c68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68e0: 0x8c45005c
    ctx->pc = 0x2c68e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2c68e4: 0x8c46004c
    ctx->pc = 0x2c68e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c68e8: 0x24070018
    ctx->pc = 0x2c68e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c68ec: 0xc0be87c
    ctx->pc = 0x2C68ECu;
    SET_GPR_U32(ctx, 31, 0x2C68F4u);
    ctx->pc = 0x2C68F0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 21), 26568));
    ctx->pc = 0x2FA1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bsearch_0x2fa1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C68F4u; }
    }
    if (ctx->pc != 0x2C68F4u) { return; }
    ctx->pc = 0x2C68F4u;
    // 0x2c68f4: 0x40902d
    ctx->pc = 0x2c68f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68f8: 0x56400036
    ctx->pc = 0x2C68F8u;
    {
        const bool branch_taken_0x2c68f8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c68f8) {
            ctx->pc = 0x2C68FCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C69D4u;
            goto label_2c69d4;
        }
    }
    ctx->pc = 0x2C6900u;
    // 0x2c6900: 0x26100001
    ctx->pc = 0x2c6900u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2c6904:
    // 0x2c6904: 0x230102a
    ctx->pc = 0x2c6904u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x2c6908: 0x5040ffed
    ctx->pc = 0x2C6908u;
    {
        const bool branch_taken_0x2c6908 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c6908) {
            ctx->pc = 0x2C690Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C68C0u;
            goto label_2c68c0;
        }
    }
    ctx->pc = 0x2C6910u;
label_2c6910:
    // 0x2c6910: 0x56400030
    ctx->pc = 0x2C6910u;
    {
        const bool branch_taken_0x2c6910 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6910) {
            ctx->pc = 0x2C6914u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C69D4u;
            goto label_2c69d4;
        }
    }
    ctx->pc = 0x2C6918u;
    // 0x2c6918: 0x2402ffff
    ctx->pc = 0x2c6918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c691c: 0x12c2003d
    ctx->pc = 0x2C691Cu;
    {
        const bool branch_taken_0x2c691c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C6920u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x2c691c) {
            ctx->pc = 0x2C6A14u;
            goto label_2c6a14;
        }
    }
    ctx->pc = 0x2C6924u;
    // 0x2c6924: 0x3c02003b
    ctx->pc = 0x2c6924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2c6928: 0x24436ff0
    ctx->pc = 0x2c6928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 28656));
    // 0x2c692c: 0xdc426ff0
    ctx->pc = 0x2c692cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 28656)));
    // 0x2c6930: 0xffa20000
    ctx->pc = 0x2c6930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2c6934: 0x94620008
    ctx->pc = 0x2c6934u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c6938: 0xa7a20008
    ctx->pc = 0x2c6938u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c693c: 0x9062000a
    ctx->pc = 0x2c693cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2c6940: 0xa3a2000a
    ctx->pc = 0x2c6940u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c6944: 0x3c020038
    ctx->pc = 0x2c6944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6948: 0x8c42c500
    ctx->pc = 0x2c6948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c694c: 0x18400019
    ctx->pc = 0x2C694Cu;
    {
        const bool branch_taken_0x2c694c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C6950u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c694c) {
            ctx->pc = 0x2C69B4u;
            goto label_2c69b4;
        }
    }
    ctx->pc = 0x2C6954u;
    // 0x2c6954: 0x3c15002c
    ctx->pc = 0x2c6954u;
    SET_GPR_U32(ctx, 21, ((uint32_t)44 << 16));
    // 0x2c6958: 0x3c110038
    ctx->pc = 0x2c6958u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2c695c: 0x8e630038
    ctx->pc = 0x2c695cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_2c6960:
    // 0x2c6960: 0x102100
    ctx->pc = 0x2c6960u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c6964: 0x641021
    ctx->pc = 0x2c6964u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c6968: 0x8c420010
    ctx->pc = 0x2c6968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c696c: 0x5440000d
    ctx->pc = 0x2C696Cu;
    {
        const bool branch_taken_0x2c696c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c696c) {
            ctx->pc = 0x2C6970u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2C69A4u;
            goto label_2c69a4;
        }
    }
    ctx->pc = 0x2C6974u;
    // 0x2c6974: 0x641021
    ctx->pc = 0x2c6974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c6978: 0x8c420004
    ctx->pc = 0x2c6978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c697c: 0x3a0202d
    ctx->pc = 0x2c697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6980: 0x8c45005c
    ctx->pc = 0x2c6980u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2c6984: 0x8c46004c
    ctx->pc = 0x2c6984u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c6988: 0x24070018
    ctx->pc = 0x2c6988u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c698c: 0xc0be87c
    ctx->pc = 0x2C698Cu;
    SET_GPR_U32(ctx, 31, 0x2C6994u);
    ctx->pc = 0x2C6990u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 21), 26568));
    ctx->pc = 0x2FA1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bsearch_0x2fa1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6994u; }
    }
    if (ctx->pc != 0x2C6994u) { return; }
    ctx->pc = 0x2C6994u;
    // 0x2c6994: 0x40902d
    ctx->pc = 0x2c6994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6998: 0x5640000e
    ctx->pc = 0x2C6998u;
    {
        const bool branch_taken_0x2c6998 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6998) {
            ctx->pc = 0x2C699Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C69D4u;
            goto label_2c69d4;
        }
    }
    ctx->pc = 0x2C69A0u;
    // 0x2c69a0: 0x26100001
    ctx->pc = 0x2c69a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2c69a4:
    // 0x2c69a4: 0x8e22c500
    ctx->pc = 0x2c69a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x2c69a8: 0x202102a
    ctx->pc = 0x2c69a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2c69ac: 0x5440ffec
    ctx->pc = 0x2C69ACu;
    {
        const bool branch_taken_0x2c69ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c69ac) {
            ctx->pc = 0x2C69B0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C6960u;
            goto label_2c6960;
        }
    }
    ctx->pc = 0x2C69B4u;
label_2c69b4:
    // 0x2c69b4: 0x56400007
    ctx->pc = 0x2C69B4u;
    {
        const bool branch_taken_0x2c69b4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c69b4) {
            ctx->pc = 0x2C69B8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C69D4u;
            goto label_2c69d4;
        }
    }
    ctx->pc = 0x2C69BCu;
    // 0x2c69bc: 0x3c04003b
    ctx->pc = 0x2c69bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c69c0: 0x24847000
    ctx->pc = 0x2c69c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28672));
    // 0x2c69c4: 0x280282d
    ctx->pc = 0x2c69c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69c8: 0xc0b4976
    ctx->pc = 0x2C69C8u;
    SET_GPR_U32(ctx, 31, 0x2C69D0u);
    ctx->pc = 0x2C69CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C69D0u; }
    }
    if (ctx->pc != 0x2C69D0u) { return; }
    ctx->pc = 0x2C69D0u;
    // 0x2c69d0: 0x8e620038
    ctx->pc = 0x2c69d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_2c69d4:
    // 0x2c69d4: 0x101900
    ctx->pc = 0x2c69d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c69d8: 0x431021
    ctx->pc = 0x2c69d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c69dc: 0x8c430004
    ctx->pc = 0x2c69dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c69e0: 0x8c62004c
    ctx->pc = 0x2c69e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2c69e4: 0x54400007
    ctx->pc = 0x2C69E4u;
    {
        const bool branch_taken_0x2c69e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c69e4) {
            ctx->pc = 0x2C69E8u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->pc = 0x2C6A04u;
            goto label_2c6a04;
        }
    }
    ctx->pc = 0x2C69ECu;
    // 0x2c69ec: 0x8c62005c
    ctx->pc = 0x2c69ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c69f0: 0x2421823
    ctx->pc = 0x2c69f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c69f4: 0x3c02aaaa
    ctx->pc = 0x2c69f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43690 << 16));
    // 0x2c69f8: 0x3442aaab
    ctx->pc = 0x2c69f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43691));
    // 0x2c69fc: 0x621018
    ctx->pc = 0x2c69fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c6a00: 0x218c3
    ctx->pc = 0x2c6a00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_2c6a04:
    // 0x2c6a04: 0x3063ffff
    ctx->pc = 0x2c6a04u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x2c6a08: 0x101400
    ctx->pc = 0x2c6a08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 16));
    // 0x2c6a0c: 0x621025
    ctx->pc = 0x2c6a0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6a10: 0xdfbf0090
    ctx->pc = 0x2c6a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c6a14:
    // 0x2c6a14: 0xdfb60080
    ctx->pc = 0x2c6a14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6a18: 0xdfb50070
    ctx->pc = 0x2c6a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6a1c: 0xdfb40060
    ctx->pc = 0x2c6a1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6a20: 0xdfb30050
    ctx->pc = 0x2c6a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6a24: 0xdfb20040
    ctx->pc = 0x2c6a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6a28: 0xdfb10030
    ctx->pc = 0x2c6a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6a2c: 0xdfb00020
    ctx->pc = 0x2c6a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6a30: 0x3e00008
    ctx->pc = 0x2C6A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C685Cu: goto label_2c685c;
            case 0x2C6868u: goto label_2c6868;
            case 0x2C6880u: goto label_2c6880;
            case 0x2C68A0u: goto label_2c68a0;
            case 0x2C68ACu: goto label_2c68ac;
            case 0x2C68C0u: goto label_2c68c0;
            case 0x2C6904u: goto label_2c6904;
            case 0x2C6910u: goto label_2c6910;
            case 0x2C6960u: goto label_2c6960;
            case 0x2C69A4u: goto label_2c69a4;
            case 0x2C69B4u: goto label_2c69b4;
            case 0x2C69D4u: goto label_2c69d4;
            case 0x2C6A04u: goto label_2c6a04;
            case 0x2C6A14u: goto label_2c6a14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C6A38u;
}
