#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawScrollListText
// Address: 0x2020c8 - 0x2021b8
void DrawScrollListText_0x2020c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2020c8u;

    // 0x2020c8: 0x27bdff60
    ctx->pc = 0x2020c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2020cc: 0xffbf0090
    ctx->pc = 0x2020ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2020d0: 0xffbe0080
    ctx->pc = 0x2020d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2020d4: 0xffb70070
    ctx->pc = 0x2020d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2020d8: 0xffb60060
    ctx->pc = 0x2020d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2020dc: 0xffb50050
    ctx->pc = 0x2020dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2020e0: 0xffb40040
    ctx->pc = 0x2020e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2020e4: 0xffb30030
    ctx->pc = 0x2020e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2020e8: 0xffb20020
    ctx->pc = 0x2020e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2020ec: 0xffb10010
    ctx->pc = 0x2020ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2020f0: 0xffb00000
    ctx->pc = 0x2020f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2020f4: 0x80882d
    ctx->pc = 0x2020f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020f8: 0xa0982d
    ctx->pc = 0x2020f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020fc: 0xc0802d
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202100: 0xe0a02d
    ctx->pc = 0x202100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202104: 0x100a82d
    ctx->pc = 0x202104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202108: 0x120b02d
    ctx->pc = 0x202108u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20210c: 0x8fb700a0
    ctx->pc = 0x20210cu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x202110: 0x140282d
    ctx->pc = 0x202110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202114: 0xc080698
    ctx->pc = 0x202114u;
    SET_GPR_U32(ctx, 31, 0x20211Cu);
    ctx->pc = 0x202118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollListMsg_0x201a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20211Cu; }
    }
    if (ctx->pc != 0x20211Cu) { return; }
    ctx->pc = 0x20211Cu;
    // 0x20211c: 0x6010011
    ctx->pc = 0x20211Cu;
    {
        const bool branch_taken_0x20211c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x202120u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20211c) {
            ctx->pc = 0x202164u;
            goto label_202164;
        }
    }
    ctx->pc = 0x202124u;
    // 0x202124: 0x24020044
    ctx->pc = 0x202124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
    // 0x202128: 0x2221018
    ctx->pc = 0x202128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20212c: 0x3c040031
    ctx->pc = 0x20212cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x202130: 0x2484f6f0
    ctx->pc = 0x202130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964976));
    // 0x202134: 0x3c030031
    ctx->pc = 0x202134u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202138: 0x442021
    ctx->pc = 0x202138u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20213c: 0x240282d
    ctx->pc = 0x20213cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202140: 0x2e0302d
    ctx->pc = 0x202140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202144: 0x3c0382d
    ctx->pc = 0x202144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202148: 0xc080a12
    ctx->pc = 0x202148u;
    SET_GPR_U32(ctx, 31, 0x202150u);
    ctx->pc = 0x20214Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x202848u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeightSub_0x202848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202150u; }
    }
    if (ctx->pc != 0x202150u) { return; }
    ctx->pc = 0x202150u;
    // 0x202150: 0x108023
    ctx->pc = 0x202150u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x202154: 0x21fc2
    ctx->pc = 0x202154u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x202158: 0x621821
    ctx->pc = 0x202158u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20215c: 0x31843
    ctx->pc = 0x20215cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x202160: 0x2038023
    ctx->pc = 0x202160u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_202164:
    // 0x202164: 0x220202d
    ctx->pc = 0x202164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202168: 0x260282d
    ctx->pc = 0x202168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20216c: 0x200302d
    ctx->pc = 0x20216cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202170: 0x280382d
    ctx->pc = 0x202170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202174: 0x2a0402d
    ctx->pc = 0x202174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202178: 0x2c0482d
    ctx->pc = 0x202178u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20217c: 0x240502d
    ctx->pc = 0x20217cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202180: 0xc0807e6
    ctx->pc = 0x202180u;
    SET_GPR_U32(ctx, 31, 0x202188u);
    ctx->pc = 0x202184u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawScrollText_0x201f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202188u; }
    }
    if (ctx->pc != 0x202188u) { return; }
    ctx->pc = 0x202188u;
    // 0x202188: 0xdfbf0090
    ctx->pc = 0x202188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20218c: 0xdfbe0080
    ctx->pc = 0x20218cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x202190: 0xdfb70070
    ctx->pc = 0x202190u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202194: 0xdfb60060
    ctx->pc = 0x202194u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202198: 0xdfb50050
    ctx->pc = 0x202198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20219c: 0xdfb40040
    ctx->pc = 0x20219cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2021a0: 0xdfb30030
    ctx->pc = 0x2021a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2021a4: 0xdfb20020
    ctx->pc = 0x2021a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2021a8: 0xdfb10010
    ctx->pc = 0x2021a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2021ac: 0xdfb00000
    ctx->pc = 0x2021acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2021b0: 0x3e00008
    ctx->pc = 0x2021B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2021B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202164u: goto label_202164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2021B8u;
}
